#include <consumer_t_impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  S8 *value){
  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this));

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_logInfo__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logInfo_(
    SF
    both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logDebug__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logDebug_(
    SF
    both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logError__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logError_(
    SF
    both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}
