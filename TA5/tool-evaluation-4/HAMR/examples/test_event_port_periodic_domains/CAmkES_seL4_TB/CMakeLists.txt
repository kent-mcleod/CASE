cmake_minimum_required(VERSION 3.8.2)

project (src_process C)

add_definitions(-DCAMKES)

includeGlobalComponents()

DeclareCAmkESComponent(emitter_t_impl
  SOURCES components/emitter_t_impl//src/emitter.c components/emitter_t_impl/src/sb_emitter_t_impl.c
  INCLUDES components/emitter_t_impl/includes/ includes

)

DeclareCAmkESComponent(consumer_t_impl
  SOURCES components/consumer_t_impl//src/consumer.c components/consumer_t_impl/src/sb_consumer_t_impl.c
  INCLUDES components/consumer_t_impl/includes/ includes

)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  INCLUDES includes

)

DeclareCAmkESComponent(sb_dst_thread_consume_Monitor
  SOURCES components/sb_Monitors/sb_dst_thread_consume_Monitor/src/sb_dst_thread_consume_Monitor.c
  INCLUDES components/sb_Monitors/sb_dst_thread_consume_Monitor/includes/ includes

)

DeclareCAmkESRootserver(src_process.camkes)
