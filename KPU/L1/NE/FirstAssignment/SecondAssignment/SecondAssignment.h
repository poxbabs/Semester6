// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SECONDASSIGNMENT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SECONDASSIGNMENT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SECONDASSIGNMENT_EXPORTS
#define SECONDASSIGNMENT_API __declspec(dllexport)
#else
#define SECONDASSIGNMENT_API __declspec(dllimport)
#endif

// This class is exported from the SecondAssignment.dll
class SECONDASSIGNMENT_API CMyDllClass
{
public:
	// Construction
	CMyDllClass(void);
	CMyDllClass(const char* aNamePtr);
	~CMyDllClass();
	// Attributes
	void SetName(const char* aNamePtr);
	char* GetName(void);
	// Methods
	void Greeting();
private:
	// Data members
	char* namePtr;
};