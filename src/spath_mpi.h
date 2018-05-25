#ifndef SPATH_MPI_H
#define SPATH_MPI_H

#include "mpi.h"

#include "spath.h"

#if 0
/* send/recv path, recv_path should be from spath_new() */
int spath_sendrecv(
  const spath* send_path,
  int send_rank,
  spath* recv_path,
  int recv_rank,
  MPI_Comm comm
);
#endif

/* broadcast path, path should be from spath_new() on non-roots */
int spath_bcast(spath* path, int root, MPI_Comm comm);

#endif /* SPATH_MPI_H */
