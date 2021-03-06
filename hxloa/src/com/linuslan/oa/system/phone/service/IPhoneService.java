package com.linuslan.oa.system.phone.service;

import java.util.List;
import java.util.Map;

import com.linuslan.oa.common.IBaseService;
import com.linuslan.oa.system.phone.model.Phone;
import com.linuslan.oa.util.Page;

public interface IPhoneService extends IBaseService {

	public abstract Page<Phone> queryPage(Map<String, String> paramMap,
			int currentPage, int limit);

	public abstract List<Phone> queryByIds(List<Long> ids);

	public abstract List<Phone> queryAllPhones();

	public abstract Phone queryById(Long id);

	public abstract boolean add(Phone phone);

	public abstract boolean update(Phone phone);

	public abstract boolean del(Phone phone);
	
}
