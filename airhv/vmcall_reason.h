#pragma once
enum vm_call_reasons
{
	VMCALL_TEST,
	VMCALL_VMXOFF,
	VMCALL_EPT_HOOK_PAGE,
	VMCALL_EPT_UNHOOK_PAGE,
	VMCALL_UNHOOK_ALL_PAGES,
	VMCALL_INVEPT_CONTEXT,
};