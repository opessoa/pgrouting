set( routing_trsp_SRCS
    ../../common/src/pgr_logger.h
    ../../common/src/pgr_time.h
    ../../common/src/pgr_time.c
    trsp.h
    trsp.c
    utils.h
    GraphDefinition.h
    trsp_core.cpp
    GraphDefinition.cpp )
add_library(trsp OBJECT ${routing_trsp_SRCS})
