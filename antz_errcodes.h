/*! \file errcodes.h
 * \brief Header for error codes in PBala
 * \author Oscar Saleta Reig
 */

/* ERROR CODES FOR PBala.c MAIN RETURN VALUES */
#ifndef E_ARGS
#define E_ARGS 10
#endif

#ifndef E_NODE_LINES
#define E_NODE_LINES 11
#endif

#ifndef E_NODE_OPEN
#define E_NODE_OPEN 12
#endif

#ifndef E_NODE_READ
#define E_NODE_READ 13
#endif

#ifndef E_CWD
#define E_CWD 14
#endif

#ifndef E_PVM_MYTID
#define E_PVM_MYTID 15
#endif

#ifndef E_PVM_PARENT
#define E_PVM_PARENT 16
#endif

#ifndef E_DATAFILE_LINES
#define E_DATAFILE_LINES 17
#endif

#ifndef E_OUTFILE_OPEN
#define E_OUTFILE_OPEN 18
#endif

#ifndef E_PVM_SPAWN
#define E_PVM_SPAWN 19
#endif

#ifndef E_DATAFILE_FIRSTCOL
#define E_DATAFILE_FIRSTCOL 20
#endif

#ifndef E_OUTDIR
#define E_OUTDIR 21
#endif

#ifndef E_WRONG_TASK
#define E_WRONG_TASK 22
#endif


/* ERROR CODES FOR task.c SLAVE RETURN STATUS */
#ifndef ST_FORK_ERR
#define ST_FORK_ERR 10
#endif

#ifndef ST_TASK_KILLED
#define ST_TASK_KILLED 11
#endif
