/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	class __vwsnc10_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc1_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc2_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc3_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc4_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc5_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc6_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc7_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc8_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc9_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	struct __vwsnf1_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
	struct __vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
	struct __vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
	struct __vwsnf5_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
	struct __vwsnf6_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
	struct __vwsnf7_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
	struct __vwsno4_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
}

namespace helloworld
{
	class MainWindowConstructor;
	class MainWindow;
}
namespace vm
{
	class IViewModel;

}
namespace helloworld
{
	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc10_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc1_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc3_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc5_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc6_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc7_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc8_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc9_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf2_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf3_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf5_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf6_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf7_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno4_HelloWorld_helloworld_MainWindowConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::vl::Ptr<::vm::IViewModel> ViewModel = ::vl::Ptr<::vm::IViewModel>();
		::helloworld::MainWindow* self = static_cast<::helloworld::MainWindow*>(nullptr);
		::vl::presentation::controls::GuiSinglelineTextBox* textBoxUserName = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr);
		::vl::presentation::controls::GuiSinglelineTextBox* textBoxPassword = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr);
		::vl::presentation::controls::GuiButton* buttonSignUp = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::controls::GuiButton* buttonCancel = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_2 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>();
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_3 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_4 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>();
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_5 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_6 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_7 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_8 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>();
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_9 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_10 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>();
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_11 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_12 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_13 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_14 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>();
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_15 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_16 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_17 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::Ptr<::vm::IViewModel> __vwsn_precompile_18 = ::vl::Ptr<::vm::IViewModel>();
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_19 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::helloworld::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_);
	public:
		MainWindowConstructor();
	};

}
namespace vm
{
	class IViewModel : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IViewModel>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IViewModel>;
#endif
	public:
		virtual ::vl::WString GetUserName() = 0;
		virtual void SetUserName(const ::vl::WString& value) = 0;
		virtual ::vl::WString GetPassword() = 0;
		virtual void SetPassword(const ::vl::WString& value) = 0;
		virtual ::vl::WString GetUserNameError() = 0;
		::vl::Event<void()> UserNameErrorChanged;
		virtual ::vl::WString GetPasswordError() = 0;
		::vl::Event<void()> PasswordErrorChanged;
		virtual bool SignUp() = 0;
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class HelloWorld
	{
	public:

		static HelloWorld& Instance();
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
