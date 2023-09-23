// dllmain.h : Declaration of module class.

class ChmailxcomModule : public ATL::CAtlDllModuleT< ChmailxcomModule >
{
public :
	DECLARE_LIBID(LIBID_hmailxcomLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_HMAILXCOM, "{e95a1fc5-59f3-47ac-b4ab-0def7d4faf6a}")
};

extern class ChmailxcomModule _AtlModule;
