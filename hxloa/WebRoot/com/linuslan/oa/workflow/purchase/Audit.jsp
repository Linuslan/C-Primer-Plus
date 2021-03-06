<%@ page language="java" import="java.util.*" pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="/c" %>
<%@ taglib prefix="fmt" uri="/fmt" %>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>My JSP "Add.jsp" starting page</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->

  </head>
  
  <body>
   	<form id="auditPurchaseForm" action="" class="form-horizontal">
   		<input class="purchaseId" type="hidden" name="purchase.id" id="auditPurchaseId" value="${purchase.id }" />
   		<div class="nav-tabs-top-border">
   			<ul class="nav nav-tabs">
   				<li class="active">
   					<a href="#purchase_audit" data-toggle="tab">详情</a>
   				</li>
   				<li>
   					<a href="#purchaseAuditorLogs_audit" data-toggle="tab">审核意见</a>
   				</li>
   			</ul>
   			<div class="tab-content">
   				<div class="active tab-pane" id="purchase_audit">
			    	<div class="box-body padding-bottom5 bottom-dotted-border" >
			    		<div class="form-group">
							<label for="text" class="col-md-2-sm col-sm-4 control-label">归属公司：</label>
							<div class="col-md-2 col-sm-8 left-label">
								${purchase.companyName }
							</div>
							<label for="text" class="col-md-2-sm col-sm-4 control-label">采购编号：</label>
							<div class="col-md-2 col-sm-8 left-label">
								${purchase.serialNo }
							</div>
							<label for="text" class="col-md-2-sm col-sm-4 control-label">供货商：</label>
							<div class="col-md-2 col-sm-8 left-label">
								${purchase.supplierName }
							</div>
						</div>
						<div class="form-group">
							<label for="text" class="col-md-2-sm col-sm-4 control-label">采购时间：</label>
							<div class="col-md-2 col-sm-8 left-label">
								<fmt:formatDate value="${purchase.purchaseDate }" pattern="yyyy-MM-dd"/>
							</div>
							<label for="departmentId" class="col-md-2-sm col-sm-4 control-label"></label>
							<div class="col-md-2 col-sm-8 left-label">
							</div>
							<label for="text" class="col-md-2-sm col-sm-4 control-label"></label>
							<div class="col-md-2 col-sm-8 left-label">
							</div>
							
						</div>
			    	</div>
			    	
			    	<div class="box-body">
			    		<table id="purchaseContentDatagrid_audit"></table>
			    	</div>
			    </div>
			   	<div class="tab-pane" id="purchaseAuditorLogs_audit">
   					<div class="box box-solid">
		   				<div class="box-body">
		   					<div class="form-group bottom-dotted-border padding-bottom5">
								<label for="leaderGroup" class="col-md-1 col-sm-1 control-label">意见：</label>
								<div class="col-md-10 col-sm-10">
									<textarea name="opinion" class="form-control" rows="3" placeholder="请输入"></textarea>
								</div>
							</div>
							<div class="col-md-12 col-sm-12 no-padding">
			   					<table id="purchaseAuditAuditorlogsDatagrid"></table>
	   							<div id="purchaseAuditAuditorlogsDatagridPager"></div>
   							</div>
		   				</div>
		   			</div>
   				</div>
   			</div>
   		</div>
   	</form>
   	<script type="text/javascript">
   		$(function() {
            //需要延时，否则加载时，设置宽度会出异常，宽度不能自适应
			setTimeout("generateAuditPurchaseAuditLogGrid()", 0);
			setTimeout("generateAuditPurchaseContenGrid()", 0);
   		});
   		
   		function generateAuditPurchaseAuditLogGrid() {
   			var id = $("#auditPurchaseForm").find("input.purchaseId").val();
   			$("#purchaseAuditAuditorlogsDatagrid").jqGrid({
                url: getRoot() + "workflow/auditlog/queryOpinionPage.action?wfType=purchase&wfId="+id,
                mtype: "POST",
                shrinkToFit: true,
                autowidth: true,
                scrollrows: false,
                scroll: false,
				styleUI : "Bootstrap",
                datatype: "json",
                colModel: [{
                	label: "ID", name: "id", hidden: true, key: true
                }, {
                	label: "审核人", name: "auditorName", width: 150, align: "center"
                }, {
                	label: "审核时间", name: "auditDate", width: 200, align: "center"
                }, {
                	label: "意见", name: "opinion", width: 400, align: "center"
                }, {
                	label: "操作类型", name: "passType", width: 100, align: "center",
                	formatter: function(cellvalue, options, rowObject) {
                		if(rowObject.passType == "0") {
                			return "通过";
                		} else {
                			return "退回";
                		}
                	}
                }],
				viewrecords: true,
                height: "100%",
                //width: "100%",
                rowNum: 20,
                pager: "#purchaseAuditAuditorlogsDatagridPager"
            });
   		}
   		
   		function generateAuditPurchaseContenGrid() {
   			var id = $("#auditPurchaseForm").find("input.purchaseId").val();
   			$("#purchaseContentDatagrid_audit").jqGrid({
   				url: getRoot() + "workflow/purchase/queryContentsByPurchaseId.action?purchase.id="+id,
                mtype: "POST",
                shrinkToFit: true,
                autowidth: true,
                scrollrows: false,
                scroll: false,
				styleUI : "Bootstrap",
                datatype: "json",
                //data: [{"id": 1, "remittanceDate": "2016-04-05", "purchaseClassName": "d", "purchaseClassId": 4, "content": "测试", "money": "5000", "remark": "cs"}],
                colModel: [{
                	label: "ID", name: "id", hidden: true
                }, {
                	label: "商品名称", name: "article"
                }, {
                	label: "规格", name: "format", width: 150, align: "center"
                }, {
                	label: "单位", name: "unit", width: 150, align: "center"
                }, {
                	label: "数量", name: "quantity", width: 150, align: "center"
                }, {
                	label: "单价", name: "price", width: 150, align: "center"
                }, {
                	label: "金额", name: "totalPrice", width: 150, align: "center"
                }, {
                	label: "备注", name: "memo", width: 300, align: "center"
                }, {
                	label: "备注2", name: "memo2", width: 300, align: "center"
                }, {
                	label: "排序号", name: "orderNo", width: 150, align: "center"
                }],
				viewrecords: true,
                height: "100%",
                //width: "100%",
                rowNum: 20
            });
   		}
   	</script>
  </body>
</html>
