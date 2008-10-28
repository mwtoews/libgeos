/**********************************************************************
 * $Id$
 *
 * GEOS - Geometry Engine Open Source
 * http://geos.refractions.net
 *
 * Copyright (C) 2005-2006 Refractions Research Inc.
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Public Licence as published
 * by the Free Software Foundation. 
 * See the COPYING file for more information.
 *
 **********************************************************************
 *
 * This file is here to make all inlined functions also 
 * available as non-inlines when building with GEOS_INLINES defined.
 *
 **********************************************************************/


// Only do something if GEOS_INLINE is defined
// Otherwise we'll end up with duplicated symbols
#ifdef GEOS_INLINE

// If using MingW or Cygwin with GEOS_INLINE to build a DLL then Win32 gcc
// has already generated the stubs for the contents of this file. 
// Hence we need to supress it to avoid "multiple definition" errors
// during the final link phase
#if !(defined(__GNUC__) && defined(_WIN32)) || defined(__GNUC__) && defined(_WIN32) && !defined(DLL_EXPORT)


// Undefine GEOS_INLINE so that .inl files
// will be ready for an implementation file
#undef GEOS_INLINE 

#include <geos/inline.h>

#include <geos/io/WKTReader.inl>
#include <geos/io/ByteOrderDataInStream.inl>
#include <geos/operation/overlay/MinimalEdgeRing.inl>
#include <geos/geomgraph/DirectedEdge.inl>
#include <geos/geomgraph/GeometryGraph.inl>
#include <geos/algorithm/ConvexHull.inl>
#include <geos/geom/GeometryCollection.inl>
#include <geos/geom/LineSegment.inl>
#include <geos/geom/PrecisionModel.inl>
#include <geos/geom/Geometry.inl>
#include <geos/geom/Envelope.inl>
#include <geos/geom/Coordinate.inl>
#include <geos/geom/GeometryFactory.inl>
#include <geos/geom/MultiLineString.inl>
#include <geos/geom/MultiPolygon.inl>
#include <geos/geom/CoordinateArraySequenceFactory.inl>
#include <geos/noding/SegmentString.inl>
#include <geos/noding/snapround/HotPixel.inl>
#include <geos/noding/snapround/MCIndexSnapRounder.inl>
#include <geos/noding/MCIndexNoder.inl>


#endif // defined __MINGW32__ and !defined DLL_EXPORT

#endif // defined GEOS_INLINE
