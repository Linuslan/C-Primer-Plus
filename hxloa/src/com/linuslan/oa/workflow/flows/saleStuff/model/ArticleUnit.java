package com.linuslan.oa.workflow.flows.saleStuff.model;

import java.util.Date;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.SequenceGenerator;
import javax.persistence.Table;

/**
 * 华夏蓝销售订单中的计量单位
 * @author LinusLan
 *
 */
@Entity
@Table(name="wf_article_unit")
public class ArticleUnit {

	@Id
	@Column(name="id")
	@GeneratedValue(generator="wfArticleUnitSeq", strategy=GenerationType.SEQUENCE)
	@SequenceGenerator(allocationSize=1, name="wfArticleUnitSeq", sequenceName="wf_article_unit_seq")
	private Long id;
	
	@Column(name="name")
	private String name;
	
	@Column(name="order_no")
	private Integer orderNo=0;
	
	@Column(name="is_delete")
	private Integer isDelete=0;
	
	@Column(name="create_date")
	private Date createDate;
	
	@Column(name="remark")
	private String remark;
	
	@Column(name="create_user_id")
	private Long createUserId;

	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public Integer getOrderNo() {
		return orderNo;
	}

	public void setOrderNo(Integer orderNo) {
		this.orderNo = orderNo;
	}

	public Integer getIsDelete() {
		return isDelete;
	}

	public void setIsDelete(Integer isDelete) {
		this.isDelete = isDelete;
	}

	public Date getCreateDate() {
		return createDate;
	}

	public void setCreateDate(Date createDate) {
		this.createDate = createDate;
	}

	public String getRemark() {
		return remark;
	}

	public void setRemark(String remark) {
		this.remark = remark;
	}

	public Long getCreateUserId() {
		return createUserId;
	}

	public void setCreateUserId(Long createUserId) {
		this.createUserId = createUserId;
	}
	
}
