#ifndef D3Q27_HPP
#define D3Q27_HPP

/** nVelocity **/
static int d3q27_nVelocity = 27;

/** cs2 **/
static double d3q27_cs2 = 1./3.;

/** Velocity sub-lattice */
static int d3q27_c[27][3] = { { 0, 0, 0},   //  0
			      // group i
		              { 1, 0, 0},   //  1
			      {-1, 0, 0},   //  2
			      { 0, 1, 0},   //  3
			      { 0,-1, 0},   //  4
			      { 0, 0, 1},   //  5
			      { 0, 0,-1},   //  6
			      // group ii
			      { 1, 1, 0},   //  7
			      {-1,-1, 0},   //  8
			      { 1,-1, 0},   //  9
			      {-1, 1, 0},   // 10
			      { 1, 0, 1},   // 11
			      {-1, 0,-1},   // 12
			      { 1, 0,-1},   // 13
			      {-1, 0, 1},   // 14
			      { 0, 1, 1},   // 15
			      { 0,-1,-1},   // 16
			      { 0, 1,-1},   // 17
			      { 0,-1, 1},   // 18
			      // group iii
			      { 1, 1, 1},   // 19
			      {-1,-1,-1},   // 20
			      { 1, 1,-1},   // 21
			      {-1,-1, 1},   // 22
			      { 1,-1, 1},   // 23
			      {-1, 1,-1},   // 24
			      {-1, 1, 1},   // 25
			      { 1,-1,-1}};  // 26

/** Weights */
static double d3q27_w[27] = { 8./27., // rest particle
			      // group i
			      2./27., 2./27., 2./27., 2./27., 2./27., 2./27.,
			      // group ii
			      1./54., 1./54., 1./54., 1./54., 1./54., 1./54.,
			      1./54., 1./54., 1./54., 1./54., 1./54., 1./54.,
			      // group iii
			      1./216., 1./216., 1./216., 1./216.,
			      1./216., 1./216., 1./216., 1./216. };

/** how many DF's to communicate */
static int d3q27_n_unk = 9;

/** which DF's to communicate in which direction */
static int d3q27_unk_E[9]  = {2,  8, 10, 12, 14, 20, 22, 24, 25};
static int d3q27_unk_W[9]  = {1,  7,  9, 11, 13, 19, 21, 23, 26};
static int d3q27_unk_N[9]  = {4,  8,  9, 16, 18, 20, 22, 23, 26};
static int d3q27_unk_S[9]  = {3,  7, 10, 15, 17, 19, 21, 24, 25};
static int d3q27_unk_U[9]  = {6, 12, 13, 16, 17, 20, 21, 24, 26};
static int d3q27_unk_D[9]  = {5, 11, 14, 15, 18, 19, 22, 23, 25};

/** reverse - for noslip boundary condition */
static int d3q27_reverse[27] = { 0,
				 2,  1,
				 4,  3,
				 6,  5,
				 8,  7,
				10,  9,
				12, 11,
				14, 13,
				16, 15,
				18, 17,
				20, 19,
				22, 21,
				24, 23,
				26, 25 };

#endif