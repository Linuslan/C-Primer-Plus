package com.linuslan.oa.workflow.flows.companyPay.service;

import java.util.List;
import java.util.Map;

import com.linuslan.oa.common.IBaseService;
import com.linuslan.oa.util.Page;
import com.linuslan.oa.workflow.flows.companyPay.model.CompanyPay;

public interface ICompanyPayService extends IBaseService {

	/**
	 * 查询登陆用户的企业付款申请
	 * @param userId
	 * @param paramMap
	 * @param page
	 * @param rows
	 * @return
	 */
	public Page<CompanyPay> queryPage(Map<String, String> paramMap, int page, int rows);
	
	/**
	 * 分页查询待登录用户审核的申请
	 * @param userId
	 * @param paramMap
	 * @param page
	 * @param rows
	 * @return
	 */
	public Page<CompanyPay> queryAuditPage(Map<String, String> paramMap, int page, int rows);
	
	/**
	 * 查询登陆用户审核过的企业付款
	 * @param paramMap
	 * @param page
	 * @param rows
	 * @return
	 */
	public Page<CompanyPay> queryAuditedPage(Map<String, String> paramMap, int page, int rows);
	
	/**
	 * 查询企业付款汇总
	 * @param paramMap
	 * @param page
	 * @param rows
	 * @return
	 */
	public Page<CompanyPay> queryReportPage(Map<String, String> paramMap, int page, int rows);
	
	/**
	 * 统计汇总页面的待审总额，待打款总额，已打款总额
	 * @param paramMap
	 * @return
	 */
	public Map<String, Object> sumReportPage(Map<String, String> paramMap);
	
	/**
	 * 通过id查询企业付款
	 * @param id
	 * @return
	 */
	public CompanyPay queryById(Long id);
	
	/**
	 * 通过ids
	 * @param ids
	 * @return
	 */
	public List<CompanyPay> queryInIds(List<Long> ids);

	/**
	 * 新增企业付款
	 * @param companyPay
	 * @return
	 */
	public boolean add(CompanyPay companyPay);
	
	/**
	 * 更新企业付款
	 * @param companyPay
	 * @return
	 */
	public boolean update(CompanyPay companyPay);
	
	/**
	 * 删除企业付款，伪删除，将isDelete=0更新为isDelete=1
	 * @param companyPay
	 * @return
	 */
	public boolean del(CompanyPay companyPay);
	
	/**
	 * 申请人提交申请
	 * @param companyPay
	 * @param passType
	 * @param opinion
	 * @return
	 */
	public boolean commit(CompanyPay companyPay, int passType, String opinion);
	
	/**
	 * 审核申请单
	 * @param companyPay
	 * @param passType
	 * @param opinion
	 * @return
	 */
	public boolean audit(CompanyPay companyPay, int passType, String opinion);
	
	/**
	 * 验证对象的有效性
	 * @param companyPay
	 */
	public void valid(CompanyPay companyPay);
	
}
