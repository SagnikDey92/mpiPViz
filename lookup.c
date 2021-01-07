/* /users/misc/sagnikd/Libraries/mpiPViz/lookup.c */
/* DO NOT EDIT -- AUTOMATICALLY GENERATED! */
/* Timestamp: 07 January 2021 20:05  */
/* Location: csews2 posix */
/* Creator: sagnikd  */


#include "mpiPi.h"
#include "mpiPi_def.h"


mpiPi_lookup_t mpiPi_lookup [] = {
	{ mpiPi_MPI_Abort, "MPI_Abort"},
	{ mpiPi_MPI_Accumulate, "MPI_Accumulate"},
	{ mpiPi_MPI_Address, "MPI_Address"},
	{ mpiPi_MPI_Allgather, "MPI_Allgather"},
	{ mpiPi_MPI_Allgatherv, "MPI_Allgatherv"},
	{ mpiPi_MPI_Allreduce, "MPI_Allreduce"},
	{ mpiPi_MPI_Alltoall, "MPI_Alltoall"},
	{ mpiPi_MPI_Alltoallv, "MPI_Alltoallv"},
	{ mpiPi_MPI_Attr_delete, "MPI_Attr_delete"},
	{ mpiPi_MPI_Attr_get, "MPI_Attr_get"},
	{ mpiPi_MPI_Attr_put, "MPI_Attr_put"},
	{ mpiPi_MPI_Barrier, "MPI_Barrier"},
	{ mpiPi_MPI_Bcast, "MPI_Bcast"},
	{ mpiPi_MPI_Bsend, "MPI_Bsend"},
	{ mpiPi_MPI_Bsend_init, "MPI_Bsend_init"},
	{ mpiPi_MPI_Buffer_attach, "MPI_Buffer_attach"},
	{ mpiPi_MPI_Buffer_detach, "MPI_Buffer_detach"},
	{ mpiPi_MPI_Cancel, "MPI_Cancel"},
	{ mpiPi_MPI_Cart_coords, "MPI_Cart_coords"},
	{ mpiPi_MPI_Cart_create, "MPI_Cart_create"},
	{ mpiPi_MPI_Cart_get, "MPI_Cart_get"},
	{ mpiPi_MPI_Cart_map, "MPI_Cart_map"},
	{ mpiPi_MPI_Cart_rank, "MPI_Cart_rank"},
	{ mpiPi_MPI_Cart_shift, "MPI_Cart_shift"},
	{ mpiPi_MPI_Cart_sub, "MPI_Cart_sub"},
	{ mpiPi_MPI_Cartdim_get, "MPI_Cartdim_get"},
	{ mpiPi_MPI_Comm_compare, "MPI_Comm_compare"},
	{ mpiPi_MPI_Comm_create, "MPI_Comm_create"},
	{ mpiPi_MPI_Comm_dup, "MPI_Comm_dup"},
	{ mpiPi_MPI_Comm_free, "MPI_Comm_free"},
	{ mpiPi_MPI_Comm_group, "MPI_Comm_group"},
	{ mpiPi_MPI_Comm_rank, "MPI_Comm_rank"},
	{ mpiPi_MPI_Comm_remote_group, "MPI_Comm_remote_group"},
	{ mpiPi_MPI_Comm_remote_size, "MPI_Comm_remote_size"},
	{ mpiPi_MPI_Comm_size, "MPI_Comm_size"},
	{ mpiPi_MPI_Comm_split, "MPI_Comm_split"},
	{ mpiPi_MPI_Comm_test_inter, "MPI_Comm_test_inter"},
	{ mpiPi_MPI_Dims_create, "MPI_Dims_create"},
	{ mpiPi_MPI_Errhandler_create, "MPI_Errhandler_create"},
	{ mpiPi_MPI_Errhandler_free, "MPI_Errhandler_free"},
	{ mpiPi_MPI_Errhandler_get, "MPI_Errhandler_get"},
	{ mpiPi_MPI_Errhandler_set, "MPI_Errhandler_set"},
	{ mpiPi_MPI_Error_class, "MPI_Error_class"},
	{ mpiPi_MPI_Error_string, "MPI_Error_string"},
	{ mpiPi_MPI_File_close, "MPI_File_close"},
	{ mpiPi_MPI_File_open, "MPI_File_open"},
	{ mpiPi_MPI_File_preallocate, "MPI_File_preallocate"},
	{ mpiPi_MPI_File_read, "MPI_File_read"},
	{ mpiPi_MPI_File_read_all, "MPI_File_read_all"},
	{ mpiPi_MPI_File_read_at, "MPI_File_read_at"},
	{ mpiPi_MPI_File_seek, "MPI_File_seek"},
	{ mpiPi_MPI_File_set_view, "MPI_File_set_view"},
	{ mpiPi_MPI_File_write, "MPI_File_write"},
	{ mpiPi_MPI_File_write_all, "MPI_File_write_all"},
	{ mpiPi_MPI_File_write_at, "MPI_File_write_at"},
	{ mpiPi_MPI_Finalize, "MPI_Finalize"},
	{ mpiPi_MPI_Finalized, "MPI_Finalized"},
	{ mpiPi_MPI_Gather, "MPI_Gather"},
	{ mpiPi_MPI_Gatherv, "MPI_Gatherv"},
	{ mpiPi_MPI_Get, "MPI_Get"},
	{ mpiPi_MPI_Get_count, "MPI_Get_count"},
	{ mpiPi_MPI_Get_elements, "MPI_Get_elements"},
	{ mpiPi_MPI_Get_processor_name, "MPI_Get_processor_name"},
	{ mpiPi_MPI_Get_version, "MPI_Get_version"},
	{ mpiPi_MPI_Graph_create, "MPI_Graph_create"},
	{ mpiPi_MPI_Graph_get, "MPI_Graph_get"},
	{ mpiPi_MPI_Graph_map, "MPI_Graph_map"},
	{ mpiPi_MPI_Graph_neighbors, "MPI_Graph_neighbors"},
	{ mpiPi_MPI_Graph_neighbors_count, "MPI_Graph_neighbors_count"},
	{ mpiPi_MPI_Graphdims_get, "MPI_Graphdims_get"},
	{ mpiPi_MPI_Group_compare, "MPI_Group_compare"},
	{ mpiPi_MPI_Group_difference, "MPI_Group_difference"},
	{ mpiPi_MPI_Group_excl, "MPI_Group_excl"},
	{ mpiPi_MPI_Group_free, "MPI_Group_free"},
	{ mpiPi_MPI_Group_incl, "MPI_Group_incl"},
	{ mpiPi_MPI_Group_intersection, "MPI_Group_intersection"},
	{ mpiPi_MPI_Group_range_excl, "MPI_Group_range_excl"},
	{ mpiPi_MPI_Group_range_incl, "MPI_Group_range_incl"},
	{ mpiPi_MPI_Group_rank, "MPI_Group_rank"},
	{ mpiPi_MPI_Group_size, "MPI_Group_size"},
	{ mpiPi_MPI_Group_translate_ranks, "MPI_Group_translate_ranks"},
	{ mpiPi_MPI_Group_union, "MPI_Group_union"},
	{ mpiPi_MPI_Ibsend, "MPI_Ibsend"},
	{ mpiPi_MPI_Init, "MPI_Init"},
	{ mpiPi_MPI_Init_thread, "MPI_Init_thread"},
	{ mpiPi_MPI_Initialized, "MPI_Initialized"},
	{ mpiPi_MPI_Intercomm_create, "MPI_Intercomm_create"},
	{ mpiPi_MPI_Intercomm_merge, "MPI_Intercomm_merge"},
	{ mpiPi_MPI_Iprobe, "MPI_Iprobe"},
	{ mpiPi_MPI_Irecv, "MPI_Irecv"},
	{ mpiPi_MPI_Irsend, "MPI_Irsend"},
	{ mpiPi_MPI_Isend, "MPI_Isend"},
	{ mpiPi_MPI_Issend, "MPI_Issend"},
	{ mpiPi_MPI_Keyval_create, "MPI_Keyval_create"},
	{ mpiPi_MPI_Keyval_free, "MPI_Keyval_free"},
	{ mpiPi_MPI_Op_create, "MPI_Op_create"},
	{ mpiPi_MPI_Op_free, "MPI_Op_free"},
	{ mpiPi_MPI_Pack, "MPI_Pack"},
	{ mpiPi_MPI_Pack_size, "MPI_Pack_size"},
	{ mpiPi_MPI_Probe, "MPI_Probe"},
	{ mpiPi_MPI_Put, "MPI_Put"},
	{ mpiPi_MPI_Recv, "MPI_Recv"},
	{ mpiPi_MPI_Recv_init, "MPI_Recv_init"},
	{ mpiPi_MPI_Reduce, "MPI_Reduce"},
	{ mpiPi_MPI_Reduce_scatter, "MPI_Reduce_scatter"},
	{ mpiPi_MPI_Request_free, "MPI_Request_free"},
	{ mpiPi_MPI_Rsend, "MPI_Rsend"},
	{ mpiPi_MPI_Rsend_init, "MPI_Rsend_init"},
	{ mpiPi_MPI_Scan, "MPI_Scan"},
	{ mpiPi_MPI_Scatter, "MPI_Scatter"},
	{ mpiPi_MPI_Scatterv, "MPI_Scatterv"},
	{ mpiPi_MPI_Send, "MPI_Send"},
	{ mpiPi_MPI_Send_init, "MPI_Send_init"},
	{ mpiPi_MPI_Sendrecv, "MPI_Sendrecv"},
	{ mpiPi_MPI_Sendrecv_replace, "MPI_Sendrecv_replace"},
	{ mpiPi_MPI_Ssend, "MPI_Ssend"},
	{ mpiPi_MPI_Ssend_init, "MPI_Ssend_init"},
	{ mpiPi_MPI_Start, "MPI_Start"},
	{ mpiPi_MPI_Startall, "MPI_Startall"},
	{ mpiPi_MPI_Test, "MPI_Test"},
	{ mpiPi_MPI_Test_cancelled, "MPI_Test_cancelled"},
	{ mpiPi_MPI_Testall, "MPI_Testall"},
	{ mpiPi_MPI_Testany, "MPI_Testany"},
	{ mpiPi_MPI_Testsome, "MPI_Testsome"},
	{ mpiPi_MPI_Topo_test, "MPI_Topo_test"},
	{ mpiPi_MPI_Type_commit, "MPI_Type_commit"},
	{ mpiPi_MPI_Type_contiguous, "MPI_Type_contiguous"},
	{ mpiPi_MPI_Type_count, "MPI_Type_count"},
	{ mpiPi_MPI_Type_create_darray, "MPI_Type_create_darray"},
	{ mpiPi_MPI_Type_create_indexed_block, "MPI_Type_create_indexed_block"},
	{ mpiPi_MPI_Type_create_subarray, "MPI_Type_create_subarray"},
	{ mpiPi_MPI_Type_extent, "MPI_Type_extent"},
	{ mpiPi_MPI_Type_free, "MPI_Type_free"},
	{ mpiPi_MPI_Type_get_contents, "MPI_Type_get_contents"},
	{ mpiPi_MPI_Type_get_envelope, "MPI_Type_get_envelope"},
	{ mpiPi_MPI_Type_hindexed, "MPI_Type_hindexed"},
	{ mpiPi_MPI_Type_hvector, "MPI_Type_hvector"},
	{ mpiPi_MPI_Type_indexed, "MPI_Type_indexed"},
	{ mpiPi_MPI_Type_lb, "MPI_Type_lb"},
	{ mpiPi_MPI_Type_size, "MPI_Type_size"},
	{ mpiPi_MPI_Type_struct, "MPI_Type_struct"},
	{ mpiPi_MPI_Type_ub, "MPI_Type_ub"},
	{ mpiPi_MPI_Type_vector, "MPI_Type_vector"},
	{ mpiPi_MPI_Unpack, "MPI_Unpack"},
	{ mpiPi_MPI_Wait, "MPI_Wait"},
	{ mpiPi_MPI_Waitall, "MPI_Waitall"},
	{ mpiPi_MPI_Waitany, "MPI_Waitany"},
	{ mpiPi_MPI_Waitsome, "MPI_Waitsome"},
	{ mpiPi_MPI_Win_complete, "MPI_Win_complete"},
	{ mpiPi_MPI_Win_create, "MPI_Win_create"},
	{ mpiPi_MPI_Win_fence, "MPI_Win_fence"},
	{ mpiPi_MPI_Win_free, "MPI_Win_free"},
	{ mpiPi_MPI_Win_get_group, "MPI_Win_get_group"},
	{ mpiPi_MPI_Win_lock, "MPI_Win_lock"},
	{ mpiPi_MPI_Win_post, "MPI_Win_post"},
	{ mpiPi_MPI_Win_start, "MPI_Win_start"},
	{ mpiPi_MPI_Win_test, "MPI_Win_test"},
	{ mpiPi_MPI_Win_unlock, "MPI_Win_unlock"},
	{ mpiPi_MPI_Win_wait, "MPI_Win_wait"},
	{ mpiPi_MPI_Wtick, "MPI_Wtick"},
	{ mpiPi_MPI_Wtime, "MPI_Wtime"},
	{0,NULL}};

/* eof */
