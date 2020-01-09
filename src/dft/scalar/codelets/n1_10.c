/*
 * Copyright (c) 2003, 2007-8 Matteo Frigo
 * Copyright (c) 2003, 2007-8 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Mon Feb  9 19:50:51 EST 2009 */

#include "codelet-dft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_notw -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -n 10 -name n1_10 -include n.h */

/*
 * This function contains 84 FP additions, 36 FP multiplications,
 * (or, 48 additions, 0 multiplications, 36 fused multiply/add),
 * 59 stack variables, 4 constants, and 40 memory accesses
 */
#include "n.h"

static void n1_10(const R *ri, const R *ii, R *ro, R *io, stride is, stride os, INT v, INT ivs, INT ovs)
{
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP618033988, +0.618033988749894848204586834365638117720309180);
     INT i;
     for (i = v; i > 0; i = i - 1, ri = ri + ivs, ii = ii + ivs, ro = ro + ovs, io = io + ovs, MAKE_VOLATILE_STRIDE(is), MAKE_VOLATILE_STRIDE(os)) {
	  E T1g, T1a, T18, T1m, T1k, T1f, T19, T11, T1h, T1l;
	  {
	       E Tj, T3, T1b, TN, T1j, TU, T1i, TV, Tq, T10, Ti, Ts, Tw, T15, Tx;
	       E T13, TG, Ty, TB, TC;
	       {
		    E T1, T2, TL, TM;
		    T1 = ri[0];
		    T2 = ri[WS(is, 5)];
		    TL = ii[0];
		    TM = ii[WS(is, 5)];
		    {
			 E T7, Tk, T6, To, Tg, T8, Tb, Tc;
			 {
			      E T4, T5, Te, Tf;
			      T4 = ri[WS(is, 2)];
			      Tj = T1 + T2;
			      T3 = T1 - T2;
			      T1b = TL + TM;
			      TN = TL - TM;
			      T5 = ri[WS(is, 7)];
			      Te = ri[WS(is, 6)];
			      Tf = ri[WS(is, 1)];
			      T7 = ri[WS(is, 8)];
			      Tk = T4 + T5;
			      T6 = T4 - T5;
			      To = Te + Tf;
			      Tg = Te - Tf;
			      T8 = ri[WS(is, 3)];
			      Tb = ri[WS(is, 4)];
			      Tc = ri[WS(is, 9)];
			 }
			 {
			      E TE, TF, Tu, Tv;
			      {
				   E Ta, Th, Tl, T9;
				   Tu = ii[WS(is, 2)];
				   Tl = T7 + T8;
				   T9 = T7 - T8;
				   {
					E Tn, Td, Tm, Tp;
					Tn = Tb + Tc;
					Td = Tb - Tc;
					Tm = Tk + Tl;
					T1j = Tk - Tl;
					Ta = T6 + T9;
					TU = T6 - T9;
					Tp = Tn + To;
					T1i = Tn - To;
					Th = Td + Tg;
					TV = Td - Tg;
					Tq = Tm + Tp;
					T10 = Tm - Tp;
					Tv = ii[WS(is, 7)];
				   }
				   Ti = Ta + Th;
				   Ts = Ta - Th;
			      }
			      TE = ii[WS(is, 6)];
			      TF = ii[WS(is, 1)];
			      Tw = Tu - Tv;
			      T15 = Tu + Tv;
			      Tx = ii[WS(is, 8)];
			      T13 = TE + TF;
			      TG = TE - TF;
			      Ty = ii[WS(is, 3)];
			      TB = ii[WS(is, 4)];
			      TC = ii[WS(is, 9)];
			 }
		    }
	       }
	       {
		    E T17, TA, T14, TH, T1e, TQ, TS;
		    {
			 E TO, TP, T16, Tz;
			 ro[WS(os, 5)] = T3 + Ti;
			 T16 = Tx + Ty;
			 Tz = Tx - Ty;
			 {
			      E T12, TD, T1c, T1d;
			      T12 = TB + TC;
			      TD = TB - TC;
			      T1c = T15 + T16;
			      T17 = T15 - T16;
			      TO = Tw + Tz;
			      TA = Tw - Tz;
			      T1d = T12 + T13;
			      T14 = T12 - T13;
			      TP = TD + TG;
			      TH = TD - TG;
			      T1e = T1c + T1d;
			      T1g = T1c - T1d;
			 }
			 ro[0] = Tj + Tq;
			 TQ = TO + TP;
			 TS = TO - TP;
		    }
		    {
			 E TK, TI, TY, TW, TR, TJ, Tt, Tr, TZ, TX, TT;
			 TK = FNMS(KP618033988, TA, TH);
			 TI = FMA(KP618033988, TH, TA);
			 io[0] = T1b + T1e;
			 io[WS(os, 5)] = TN + TQ;
			 Tr = FNMS(KP250000000, Ti, T3);
			 TY = FNMS(KP618033988, TU, TV);
			 TW = FMA(KP618033988, TV, TU);
			 TR = FNMS(KP250000000, TQ, TN);
			 TJ = FNMS(KP559016994, Ts, Tr);
			 Tt = FMA(KP559016994, Ts, Tr);
			 T1a = FMA(KP618033988, T14, T17);
			 T18 = FNMS(KP618033988, T17, T14);
			 ro[WS(os, 7)] = FNMS(KP951056516, TK, TJ);
			 ro[WS(os, 3)] = FMA(KP951056516, TK, TJ);
			 ro[WS(os, 1)] = FMA(KP951056516, TI, Tt);
			 ro[WS(os, 9)] = FNMS(KP951056516, TI, Tt);
			 TX = FNMS(KP559016994, TS, TR);
			 TT = FMA(KP559016994, TS, TR);
			 TZ = FNMS(KP250000000, Tq, Tj);
			 io[WS(os, 3)] = FNMS(KP951056516, TY, TX);
			 io[WS(os, 7)] = FMA(KP951056516, TY, TX);
			 io[WS(os, 9)] = FMA(KP951056516, TW, TT);
			 io[WS(os, 1)] = FNMS(KP951056516, TW, TT);
			 T1m = FMA(KP618033988, T1i, T1j);
			 T1k = FNMS(KP618033988, T1j, T1i);
			 T1f = FNMS(KP250000000, T1e, T1b);
			 T19 = FMA(KP559016994, T10, TZ);
			 T11 = FNMS(KP559016994, T10, TZ);
		    }
	       }
	  }
	  ro[WS(os, 4)] = FNMS(KP951056516, T1a, T19);
	  ro[WS(os, 6)] = FMA(KP951056516, T1a, T19);
	  ro[WS(os, 8)] = FMA(KP951056516, T18, T11);
	  ro[WS(os, 2)] = FNMS(KP951056516, T18, T11);
	  T1h = FNMS(KP559016994, T1g, T1f);
	  T1l = FMA(KP559016994, T1g, T1f);
	  io[WS(os, 4)] = FMA(KP951056516, T1m, T1l);
	  io[WS(os, 6)] = FNMS(KP951056516, T1m, T1l);
	  io[WS(os, 8)] = FNMS(KP951056516, T1k, T1h);
	  io[WS(os, 2)] = FMA(KP951056516, T1k, T1h);
     }
}

static const kdft_desc desc = { 10, "n1_10", {48, 0, 36, 0}, &GENUS, 0, 0, 0, 0 };
void X(codelet_n1_10) (planner *p) {
     X(kdft_register) (p, n1_10, &desc);
}

#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_notw -compact -variables 4 -pipeline-latency 4 -n 10 -name n1_10 -include n.h */

/*
 * This function contains 84 FP additions, 24 FP multiplications,
 * (or, 72 additions, 12 multiplications, 12 fused multiply/add),
 * 41 stack variables, 4 constants, and 40 memory accesses
 */
#include "n.h"

static void n1_10(const R *ri, const R *ii, R *ro, R *io, stride is, stride os, INT v, INT ivs, INT ovs)
{
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     INT i;
     for (i = v; i > 0; i = i - 1, ri = ri + ivs, ii = ii + ivs, ro = ro + ovs, io = io + ovs, MAKE_VOLATILE_STRIDE(is), MAKE_VOLATILE_STRIDE(os)) {
	  E T3, Tj, TQ, T1e, TU, TV, T1c, T1b, Tm, Tp, Tq, Ta, Th, Ti, TA;
	  E TH, T17, T14, T1f, T1g, T1h, TL, TM, TR;
	  {
	       E T1, T2, TO, TP;
	       T1 = ri[0];
	       T2 = ri[WS(is, 5)];
	       T3 = T1 - T2;
	       Tj = T1 + T2;
	       TO = ii[0];
	       TP = ii[WS(is, 5)];
	       TQ = TO - TP;
	       T1e = TO + TP;
	  }
	  {
	       E T6, Tk, Tg, To, T9, Tl, Td, Tn;
	       {
		    E T4, T5, Te, Tf;
		    T4 = ri[WS(is, 2)];
		    T5 = ri[WS(is, 7)];
		    T6 = T4 - T5;
		    Tk = T4 + T5;
		    Te = ri[WS(is, 6)];
		    Tf = ri[WS(is, 1)];
		    Tg = Te - Tf;
		    To = Te + Tf;
	       }
	       {
		    E T7, T8, Tb, Tc;
		    T7 = ri[WS(is, 8)];
		    T8 = ri[WS(is, 3)];
		    T9 = T7 - T8;
		    Tl = T7 + T8;
		    Tb = ri[WS(is, 4)];
		    Tc = ri[WS(is, 9)];
		    Td = Tb - Tc;
		    Tn = Tb + Tc;
	       }
	       TU = T6 - T9;
	       TV = Td - Tg;
	       T1c = Tk - Tl;
	       T1b = Tn - To;
	       Tm = Tk + Tl;
	       Tp = Tn + To;
	       Tq = Tm + Tp;
	       Ta = T6 + T9;
	       Th = Td + Tg;
	       Ti = Ta + Th;
	  }
	  {
	       E Tw, T15, TG, T13, Tz, T16, TD, T12;
	       {
		    E Tu, Tv, TE, TF;
		    Tu = ii[WS(is, 2)];
		    Tv = ii[WS(is, 7)];
		    Tw = Tu - Tv;
		    T15 = Tu + Tv;
		    TE = ii[WS(is, 6)];
		    TF = ii[WS(is, 1)];
		    TG = TE - TF;
		    T13 = TE + TF;
	       }
	       {
		    E Tx, Ty, TB, TC;
		    Tx = ii[WS(is, 8)];
		    Ty = ii[WS(is, 3)];
		    Tz = Tx - Ty;
		    T16 = Tx + Ty;
		    TB = ii[WS(is, 4)];
		    TC = ii[WS(is, 9)];
		    TD = TB - TC;
		    T12 = TB + TC;
	       }
	       TA = Tw - Tz;
	       TH = TD - TG;
	       T17 = T15 - T16;
	       T14 = T12 - T13;
	       T1f = T15 + T16;
	       T1g = T12 + T13;
	       T1h = T1f + T1g;
	       TL = Tw + Tz;
	       TM = TD + TG;
	       TR = TL + TM;
	  }
	  ro[WS(os, 5)] = T3 + Ti;
	  io[WS(os, 5)] = TQ + TR;
	  ro[0] = Tj + Tq;
	  io[0] = T1e + T1h;
	  {
	       E TI, TK, Tt, TJ, Tr, Ts;
	       TI = FMA(KP951056516, TA, KP587785252 * TH);
	       TK = FNMS(KP587785252, TA, KP951056516 * TH);
	       Tr = KP559016994 * (Ta - Th);
	       Ts = FNMS(KP250000000, Ti, T3);
	       Tt = Tr + Ts;
	       TJ = Ts - Tr;
	       ro[WS(os, 9)] = Tt - TI;
	       ro[WS(os, 3)] = TJ + TK;
	       ro[WS(os, 1)] = Tt + TI;
	       ro[WS(os, 7)] = TJ - TK;
	  }
	  {
	       E TW, TY, TT, TX, TN, TS;
	       TW = FMA(KP951056516, TU, KP587785252 * TV);
	       TY = FNMS(KP587785252, TU, KP951056516 * TV);
	       TN = KP559016994 * (TL - TM);
	       TS = FNMS(KP250000000, TR, TQ);
	       TT = TN + TS;
	       TX = TS - TN;
	       io[WS(os, 1)] = TT - TW;
	       io[WS(os, 7)] = TY + TX;
	       io[WS(os, 9)] = TW + TT;
	       io[WS(os, 3)] = TX - TY;
	  }
	  {
	       E T18, T1a, T11, T19, TZ, T10;
	       T18 = FNMS(KP587785252, T17, KP951056516 * T14);
	       T1a = FMA(KP951056516, T17, KP587785252 * T14);
	       TZ = FNMS(KP250000000, Tq, Tj);
	       T10 = KP559016994 * (Tm - Tp);
	       T11 = TZ - T10;
	       T19 = T10 + TZ;
	       ro[WS(os, 2)] = T11 - T18;
	       ro[WS(os, 6)] = T19 + T1a;
	       ro[WS(os, 8)] = T11 + T18;
	       ro[WS(os, 4)] = T19 - T1a;
	  }
	  {
	       E T1d, T1l, T1k, T1m, T1i, T1j;
	       T1d = FNMS(KP587785252, T1c, KP951056516 * T1b);
	       T1l = FMA(KP951056516, T1c, KP587785252 * T1b);
	       T1i = FNMS(KP250000000, T1h, T1e);
	       T1j = KP559016994 * (T1f - T1g);
	       T1k = T1i - T1j;
	       T1m = T1j + T1i;
	       io[WS(os, 2)] = T1d + T1k;
	       io[WS(os, 6)] = T1m - T1l;
	       io[WS(os, 8)] = T1k - T1d;
	       io[WS(os, 4)] = T1l + T1m;
	  }
     }
}

static const kdft_desc desc = { 10, "n1_10", {72, 12, 12, 0}, &GENUS, 0, 0, 0, 0 };
void X(codelet_n1_10) (planner *p) {
     X(kdft_register) (p, n1_10, &desc);
}

#endif				/* HAVE_FMA */
