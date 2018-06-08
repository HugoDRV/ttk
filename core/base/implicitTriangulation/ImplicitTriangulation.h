/// \ingroup base
/// \class ttk::ImplicitTriangulation
/// \author Guillaume Favelier <guillaume.favelier@lip6.fr>
/// \date January 2016.
///
/// \brief ImplicitTriangulation is a class that provides time and memory
/// efficient traversal methods on triangulations of piecewise linear
/// manifolds represented by regular grids.
/// \sa Triangulation

#ifndef _IMPLICITTRIANGULATION_H
#define _IMPLICITTRIANGULATION_H

// base code includes
#include                  <AbstractTriangulation.h>

#ifdef _WIN32
#include <ciso646>
#endif

namespace ttk{

  class ImplicitTriangulation : public AbstractTriangulation{

    public:
      ImplicitTriangulation();
      ~ImplicitTriangulation();

      int getCellEdge(const SimplexId &cellId, const int &id, SimplexId &edgeId) const;

      SimplexId getCellEdgeNumber(const SimplexId &cellId) const;

      const std::vector<std::vector<SimplexId>>* getCellEdges();

      int getCellNeighbor(const SimplexId &cellId,
        const int &localNeighborId, SimplexId &neighborId) const;

      SimplexId getCellNeighborNumber(const SimplexId &cellId) const;

      const std::vector<std::vector<SimplexId>>* getCellNeighbors();

      int getCellTriangle(const SimplexId &cellId, const int &id,
        SimplexId &triangleId) const;

       SimplexId getCellTriangleNumber(const SimplexId &cellId) const{
        // NOTE: the output is always 4 here. let's keep the function in there
        // in case of further generalization to CW-complexes
        return 4;
      };

      const std::vector<std::vector<SimplexId>>* getCellTriangles();

      int getCellVertex(const SimplexId &cellId, const int &localVertexId,
        SimplexId &vertexId) const;

      SimplexId getCellVertexNumber(const SimplexId &cellId) const;

      int getDimensionality() const {return dimensionality_;};

      int getEdgeLink(const SimplexId &edgeId, const int &localLinkId,
        SimplexId &linkId) const;

       SimplexId getEdgeLinkNumber(const SimplexId &edgeId) const;

      const std::vector<std::vector<SimplexId>>* getEdgeLinks();

      int getEdgeStar(const SimplexId &edgeId, const int &localStarId,
        SimplexId &starId) const;

      SimplexId getEdgeStarNumber(const SimplexId &edgeId) const;

      const std::vector<std::vector<SimplexId>>* getEdgeStars();

      int getEdgeTriangle(const SimplexId &edgeId, const int &id,
        SimplexId &triangleId) const;

      SimplexId getEdgeTriangleNumber(const SimplexId &edgeId) const;

      const std::vector<std::vector<SimplexId>>* getEdgeTriangles();

      int getEdgeVertex(const SimplexId &edgeId, const int &localVertexId,
        SimplexId &vertexId) const;

      const std::vector<std::pair<SimplexId,SimplexId>>* getEdges();

      SimplexId getNumberOfCells() const{return cellNumber_;};

      SimplexId getNumberOfEdges() const{return edgeNumber_;};

      SimplexId getNumberOfTriangles() const{return triangleNumber_;};

      SimplexId getNumberOfVertices() const{return vertexNumber_;};

      int getTetrahedronEdge(const SimplexId &tetId, const int &id,
        SimplexId &edgeId) const;

      int getTetrahedronEdges(std::vector<std::vector<SimplexId>>& edges) const;

      int getTetrahedronTriangle(const SimplexId &tetId, const int &id,
SimplexId &triangleId) const;

      int getTetrahedronTriangles(std::vector<std::vector<SimplexId>>& triangles)
const;

      int getTetrahedronNeighbor(const SimplexId &tetId, const int &localNeighborId,
SimplexId &neighborId) const;

      SimplexId getTetrahedronNeighborNumber(const SimplexId &tetId) const;

      int getTetrahedronNeighbors(std::vector<std::vector<SimplexId>>& neighbors);

      int getTetrahedronVertex(const SimplexId &tetId, const int& localVertexId,
SimplexId &vertexId) const;

      int getTriangleEdge(const SimplexId &triangleId, const int &id,
SimplexId &edgeId) const;

      SimplexId getTriangleEdgeNumber(const SimplexId &triangleId) const{
        // NOTE: the output is always 3 here. let's keep the function in there
        // in case of further generalization to CW-complexes
        return 3;
      }

      const std::vector<std::vector<SimplexId>>* getTriangleEdges();

      int getTriangleEdges(std::vector<std::vector<SimplexId>>& edges) const;

      int getTriangleLink(const SimplexId &triangleId, const int &localLinkId,
SimplexId &linkId) const;

      SimplexId getTriangleLinkNumber(const SimplexId &triangleId) const;

      const std::vector<std::vector<SimplexId> >* getTriangleLinks();

      int getTriangleNeighbor(const SimplexId &triangleId, const int &localNeighborId,
SimplexId &neighborId) const;

      SimplexId getTriangleNeighborNumber(const SimplexId &triangleId) const;

      int getTriangleNeighbors(std::vector<std::vector<SimplexId>>& neighbors);

      int getTriangleStar(const SimplexId &triangleId, const int &localStarId,
SimplexId &starId) const;

      SimplexId getTriangleStarNumber(const SimplexId &triangleId) const;

      const std::vector<std::vector<SimplexId>>* getTriangleStars();

      int getTriangleVertex(const SimplexId &triangleId, const int &localVertexId,
SimplexId &vertexId) const;

      const std::vector<std::vector<SimplexId>>* getTriangles();

      int getVertexEdge(const SimplexId &vertexId, const int &id,
SimplexId &edgeId) const;

      SimplexId getVertexEdgeNumber(const SimplexId &vertexId) const;

      const std::vector<std::vector<SimplexId>>* getVertexEdges();

      int getVertexLink(const SimplexId &vertexId, const int& localLinkId,
SimplexId &linkId) const;

      SimplexId getVertexLinkNumber(const SimplexId &vertexId) const;

      const std::vector<std::vector<SimplexId> >* getVertexLinks();

      int getVertexNeighbor(const SimplexId &vertexId, const int &localNeighborId,
SimplexId &neighborId) const;

      SimplexId getVertexNeighborNumber(const SimplexId &vertexId) const;

      const std::vector<std::vector<SimplexId>>* getVertexNeighbors();

      int getVertexPoint(const SimplexId &vertexId, float &x, float &y, float &z)
const;

      int getVertexStar(const SimplexId &vertexId, const int &localStarId,
SimplexId &starId) const;

      SimplexId getVertexStarNumber(const SimplexId &vertexId) const;

      const std::vector<std::vector<SimplexId>>* getVertexStars();

      int getVertexTriangle(const SimplexId &vertexId, const int &id,
SimplexId &triangleId) const;

      SimplexId getVertexTriangleNumber(const SimplexId &vertexId) const;

      const std::vector<std::vector<SimplexId>>* getVertexTriangles();

      bool isEdgeOnBoundary(const SimplexId &edgeId) const;

      bool isEmpty() const{return !vertexNumber_;};

      bool isTriangleOnBoundary(const SimplexId &triangleId) const;

      bool isVertexOnBoundary(const SimplexId &vertexId) const;

      int setInputGrid(const float &xOrigin, const float &yOrigin, const float &zOrigin,
          const float &xSpacing, const float &ySpacing, const float &zSpacing,
          const int &xDim, const int &yDim, const int &zDim);

    protected:
      int dimensionality_;//
      float origin_[3];//
      float spacing_[3];//
      SimplexId dimensions_[3];// dimensions
      SimplexId nbvoxels_[3];// nombre de voxels par axe

      // Vertex helper //
      SimplexId vshift_[2];// VertexShift

      // Edge helper //
      SimplexId esetdims_[7];// EdgeSetDimensions
      SimplexId esetshift_[7];// EdgeSetShift
      SimplexId eshift_[14];// EdgeShift

      // Triangle helper //
      SimplexId tsetdims_[6];// TriangleSetDimensions
      SimplexId tsetshift_[6];// TriangleSetShift
      SimplexId tshift_[12];// TriangleShift

      // Tetrahedron helper //
      SimplexId tetshift_[2];// TetrahedronShift

      SimplexId cellNumber_;// number of cells
      SimplexId vertexNumber_;// number of vertices
      SimplexId edgeNumber_;// number of edges
      SimplexId triangleNumber_;// number of triangles
      SimplexId tetrahedronNumber_;// number of tetrahedra

      // 2d helpers
      SimplexId Di_;
      SimplexId Dj_;

      // acceleration variables
      bool isAccelerated_;
      SimplexId mod_[2];
      SimplexId div_[2];

      // acceleration functions
      int checkAcceleration();
      bool isPowerOfTwo(unsigned long long int v, unsigned long long int& r);

      //\cond
      // 2D //
      void vertexToPosition2d(const SimplexId vertex, SimplexId p[2]) const;
      void edgeToPosition2d(const SimplexId edge, const int k, SimplexId p[2]) const;
      void triangleToPosition2d(const SimplexId triangle, SimplexId p[2]) const;

      int getVertexNeighbor2dA(const SimplexId v,const int id) const;
      int getVertexNeighbor2dB(const SimplexId v,const int id) const;
      int getVertexNeighbor2dC(const SimplexId v,const int id) const;
      int getVertexNeighbor2dD(const SimplexId v,const int id) const;
      int getVertexNeighbor2dAB(const SimplexId v,const int id) const;
      int getVertexNeighbor2dCD(const SimplexId v,const int id) const;
      int getVertexNeighbor2dAC(const SimplexId v,const int id) const;
      int getVertexNeighbor2dBD(const SimplexId v,const int id) const;
      int getVertexNeighbor2dABCD(const SimplexId v,const int id) const;

      int getVertexEdge2dA(const SimplexId p[2],const int id) const;
      int getVertexEdge2dB(const SimplexId p[2],const int id) const;
      int getVertexEdge2dC(const SimplexId p[2],const int id) const;
      int getVertexEdge2dD(const SimplexId p[2],const int id) const;
      int getVertexEdge2dAB(const SimplexId p[2],const int id) const;
      int getVertexEdge2dCD(const SimplexId p[2],const int id) const;
      int getVertexEdge2dAC(const SimplexId p[2],const int id) const;
      int getVertexEdge2dBD(const SimplexId p[2],const int id) const;
      int getVertexEdge2dABCD(const SimplexId p[2],const int id) const;

      int getVertexStar2dA(const SimplexId p[2], const int id) const;
      int getVertexStar2dB(const SimplexId p[2], const int id) const;
      int getVertexStar2dC(const SimplexId p[2], const int id) const;
      int getVertexStar2dD(const SimplexId p[2], const int id) const;
      int getVertexStar2dAB(const SimplexId p[2], const int id) const;
      int getVertexStar2dCD(const SimplexId p[2], const int id) const;
      int getVertexStar2dAC(const SimplexId p[2], const int id) const;
      int getVertexStar2dBD(const SimplexId p[2], const int id) const;
      int getVertexStar2dABCD(const SimplexId p[2], const int id) const;

      int getVertexLink2dA(const SimplexId p[2],const int id) const;
      int getVertexLink2dB(const SimplexId p[2],const int id) const;
      int getVertexLink2dC(const SimplexId p[2],const int id) const;
      int getVertexLink2dD(const SimplexId p[2],const int id) const;
      int getVertexLink2dAB(const SimplexId p[2],const int id) const;
      int getVertexLink2dCD(const SimplexId p[2],const int id) const;
      int getVertexLink2dAC(const SimplexId p[2],const int id) const;
      int getVertexLink2dBD(const SimplexId p[2],const int id) const;
      int getVertexLink2dABCD(const SimplexId p[2],const int id) const;

      int getEdgeTriangleL_x0(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xn(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xN(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_0y(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_ny(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_Ny(const SimplexId p[3], const int id) const;
      int getEdgeTriangleD1_xy(const SimplexId p[3], const int id) const;

      int getEdgeLink2dL(const SimplexId p[2], const int id) const;
      int getEdgeLink2dH(const SimplexId p[2], const int id) const;
      int getEdgeLink2dD1(const SimplexId p[2], const int id) const;

      int getEdgeStar2dL(const SimplexId p[2], const int id) const;
      int getEdgeStar2dH(const SimplexId p[2], const int id) const;

      // 3D //
      void vertexToPosition(const SimplexId vertex, SimplexId p[3]) const;
      void edgeToPosition(const SimplexId edge, const int k, SimplexId p[3]) const;
      void triangleToPosition(const SimplexId triangle, const int k, SimplexId p[3]) const;
      void tetrahedronToPosition(const SimplexId tetrahedron, SimplexId p[3]) const;

      int getVertexNeighborA(const SimplexId v,const int id) const;
      int getVertexNeighborB(const SimplexId v,const int id) const;
      int getVertexNeighborC(const SimplexId v,const int id) const;
      int getVertexNeighborD(const SimplexId v,const int id) const;
      int getVertexNeighborE(const SimplexId v,const int id) const;
      int getVertexNeighborF(const SimplexId v,const int id) const;
      int getVertexNeighborG(const SimplexId v,const int id) const;
      int getVertexNeighborH(const SimplexId v,const int id) const;
      int getVertexNeighborAB(const SimplexId v,const int id) const;
      int getVertexNeighborCD(const SimplexId v,const int id) const;
      int getVertexNeighborEF(const SimplexId v,const int id) const;
      int getVertexNeighborGH(const SimplexId v,const int id) const;
      int getVertexNeighborAC(const SimplexId v,const int id) const;
      int getVertexNeighborBD(const SimplexId v,const int id) const;
      int getVertexNeighborEG(const SimplexId v,const int id) const;
      int getVertexNeighborFH(const SimplexId v,const int id) const;
      int getVertexNeighborAE(const SimplexId v,const int id) const;
      int getVertexNeighborBF(const SimplexId v,const int id) const;
      int getVertexNeighborCG(const SimplexId v,const int id) const;
      int getVertexNeighborDH(const SimplexId v,const int id) const;
      int getVertexNeighborABDC(const SimplexId v,const int id) const;
      int getVertexNeighborEFHG(const SimplexId v,const int id) const;
      int getVertexNeighborAEGC(const SimplexId v,const int id) const;
      int getVertexNeighborBFHD(const SimplexId v,const int id) const;
      int getVertexNeighborAEFB(const SimplexId v,const int id) const;
      int getVertexNeighborGHDC(const SimplexId v,const int id) const;
      int getVertexNeighborABCDEFGH(const SimplexId v,const int id) const;

      int getVertexEdgeA(const SimplexId p[3],const int id) const;
      int getVertexEdgeB(const SimplexId p[3],const int id) const;
      int getVertexEdgeC(const SimplexId p[3],const int id) const;
      int getVertexEdgeD(const SimplexId p[3],const int id) const;
      int getVertexEdgeE(const SimplexId p[3],const int id) const;
      int getVertexEdgeF(const SimplexId p[3],const int id) const;
      int getVertexEdgeG(const SimplexId p[3],const int id) const;
      int getVertexEdgeH(const SimplexId p[3],const int id) const;
      int getVertexEdgeAB(const SimplexId p[3],const int id) const;
      int getVertexEdgeCD(const SimplexId p[3],const int id) const;
      int getVertexEdgeEF(const SimplexId p[3],const int id) const;
      int getVertexEdgeGH(const SimplexId p[3],const int id) const;
      int getVertexEdgeAC(const SimplexId p[3],const int id) const;
      int getVertexEdgeBD(const SimplexId p[3],const int id) const;
      int getVertexEdgeEG(const SimplexId p[3],const int id) const;
      int getVertexEdgeFH(const SimplexId p[3],const int id) const;
      int getVertexEdgeAE(const SimplexId p[3],const int id) const;
      int getVertexEdgeBF(const SimplexId p[3],const int id) const;
      int getVertexEdgeCG(const SimplexId p[3],const int id) const;
      int getVertexEdgeDH(const SimplexId p[3],const int id) const;
      int getVertexEdgeABDC(const SimplexId p[3],const int id) const;
      int getVertexEdgeEFHG(const SimplexId p[3],const int id) const;
      int getVertexEdgeAEGC(const SimplexId p[3],const int id) const;
      int getVertexEdgeBFHD(const SimplexId p[3],const int id) const;
      int getVertexEdgeAEFB(const SimplexId p[3],const int id) const;
      int getVertexEdgeGHDC(const SimplexId p[3],const int id) const;
      int getVertexEdgeABCDEFGH(const SimplexId p[3],const int id) const;

      int getVertexTriangleA(const SimplexId p[3],const int id) const;
      int getVertexTriangleB(const SimplexId p[3],const int id) const;
      int getVertexTriangleC(const SimplexId p[3],const int id) const;
      int getVertexTriangleD(const SimplexId p[3],const int id) const;
      int getVertexTriangleE(const SimplexId p[3],const int id) const;
      int getVertexTriangleF(const SimplexId p[3],const int id) const;
      int getVertexTriangleG(const SimplexId p[3],const int id) const;
      int getVertexTriangleH(const SimplexId p[3],const int id) const;
      int getVertexTriangleAB(const SimplexId p[3],const int id) const;
      int getVertexTriangleCD(const SimplexId p[3],const int id) const;
      int getVertexTriangleEF(const SimplexId p[3],const int id) const;
      int getVertexTriangleGH(const SimplexId p[3],const int id) const;
      int getVertexTriangleAC(const SimplexId p[3],const int id) const;
      int getVertexTriangleBD(const SimplexId p[3],const int id) const;
      int getVertexTriangleEG(const SimplexId p[3],const int id) const;
      int getVertexTriangleFH(const SimplexId p[3],const int id) const;
      int getVertexTriangleAE(const SimplexId p[3],const int id) const;
      int getVertexTriangleBF(const SimplexId p[3],const int id) const;
      int getVertexTriangleCG(const SimplexId p[3],const int id) const;
      int getVertexTriangleDH(const SimplexId p[3],const int id) const;
      int getVertexTriangleABDC(const SimplexId p[3],const int id) const;
      int getVertexTriangleEFHG(const SimplexId p[3],const int id) const;
      int getVertexTriangleAEGC(const SimplexId p[3],const int id) const;
      int getVertexTriangleBFHD(const SimplexId p[3],const int id) const;
      int getVertexTriangleAEFB(const SimplexId p[3],const int id) const;
      int getVertexTriangleGHDC(const SimplexId p[3],const int id) const;
      int getVertexTriangleABCDEFGH(const SimplexId p[3],const int id) const;

      int getVertexLinkA(const SimplexId p[3],const int id) const;
      int getVertexLinkB(const SimplexId p[3],const int id) const;
      int getVertexLinkC(const SimplexId p[3],const int id) const;
      int getVertexLinkD(const SimplexId p[3],const int id) const;
      int getVertexLinkE(const SimplexId p[3],const int id) const;
      int getVertexLinkF(const SimplexId p[3],const int id) const;
      int getVertexLinkG(const SimplexId p[3],const int id) const;
      int getVertexLinkH(const SimplexId p[3],const int id) const;
      int getVertexLinkAB(const SimplexId p[3],const int id) const;
      int getVertexLinkCD(const SimplexId p[3],const int id) const;
      int getVertexLinkEF(const SimplexId p[3],const int id) const;
      int getVertexLinkGH(const SimplexId p[3],const int id) const;
      int getVertexLinkAC(const SimplexId p[3],const int id) const;
      int getVertexLinkBD(const SimplexId p[3],const int id) const;
      int getVertexLinkEG(const SimplexId p[3],const int id) const;
      int getVertexLinkFH(const SimplexId p[3],const int id) const;
      int getVertexLinkAE(const SimplexId p[3],const int id) const;
      int getVertexLinkBF(const SimplexId p[3],const int id) const;
      int getVertexLinkCG(const SimplexId p[3],const int id) const;
      int getVertexLinkDH(const SimplexId p[3],const int id) const;
      int getVertexLinkABDC(const SimplexId p[3],const int id) const;
      int getVertexLinkEFHG(const SimplexId p[3],const int id) const;
      int getVertexLinkAEGC(const SimplexId p[3],const int id) const;
      int getVertexLinkBFHD(const SimplexId p[3],const int id) const;
      int getVertexLinkAEFB(const SimplexId p[3],const int id) const;
      int getVertexLinkGHDC(const SimplexId p[3],const int id) const;
      int getVertexLinkABCDEFGH(const SimplexId p[3],const int id) const;

      int getVertexStarA(const SimplexId p[3], const int id) const;
      int getVertexStarB(const SimplexId p[3],const int id) const;
      int getVertexStarC(const SimplexId p[3],const int id) const;
      int getVertexStarD(const SimplexId p[3],const int id) const;
      int getVertexStarE(const SimplexId p[3],const int id) const;
      int getVertexStarF(const SimplexId p[3],const int id) const;
      int getVertexStarG(const SimplexId p[3],const int id) const;
      int getVertexStarH(const SimplexId p[3],const int id) const;
      int getVertexStarAB(const SimplexId p[3],const int id) const;
      int getVertexStarCD(const SimplexId p[3],const int id) const;
      int getVertexStarEF(const SimplexId p[3],const int id) const;
      int getVertexStarGH(const SimplexId p[3],const int id) const;
      int getVertexStarAC(const SimplexId p[3],const int id) const;
      int getVertexStarBD(const SimplexId p[3],const int id) const;
      int getVertexStarEG(const SimplexId p[3],const int id) const;
      int getVertexStarFH(const SimplexId p[3],const int id) const;
      int getVertexStarAE(const SimplexId p[3],const int id) const;
      int getVertexStarBF(const SimplexId p[3],const int id) const;
      int getVertexStarCG(const SimplexId p[3],const int id) const;
      int getVertexStarDH(const SimplexId p[3],const int id) const;
      int getVertexStarABDC(const SimplexId p[3],const int id) const;
      int getVertexStarEFHG(const SimplexId p[3],const int id) const;
      int getVertexStarAEGC(const SimplexId p[3],const int id) const;
      int getVertexStarBFHD(const SimplexId p[3],const int id) const;
      int getVertexStarAEFB(const SimplexId p[3],const int id) const;
      int getVertexStarGHDC(const SimplexId p[3],const int id) const;
      int getVertexStarABCDEFGH(const SimplexId p[3],const int id) const;

      int getEdgeTriangleL_x00(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_x0n(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_x0N(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xn0(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xnn(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xnN(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xN0(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xNn(const SimplexId p[3], const int id) const;
      int getEdgeTriangleL_xNN(const SimplexId p[3], const int id) const;

      int getEdgeTriangleH_0y0(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_0yn(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_0yN(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_ny0(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_nyn(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_nyN(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_Ny0(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_Nyn(const SimplexId p[3], const int id) const;
      int getEdgeTriangleH_NyN(const SimplexId p[3], const int id) const;

      int getEdgeTriangleP_00z(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_0nz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_0Nz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_n0z(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_nnz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_nNz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_N0z(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_Nnz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleP_NNz(const SimplexId p[3], const int id) const;

      int getEdgeTriangleD1_xy0(const SimplexId p[3], const int id) const;
      int getEdgeTriangleD1_xyn(const SimplexId p[3], const int id) const;
      int getEdgeTriangleD1_xyN(const SimplexId p[3], const int id) const;

      int getEdgeTriangleD2_0yz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleD2_nyz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleD2_Nyz(const SimplexId p[3], const int id) const;

      int getEdgeTriangleD3_x0z(const SimplexId p[3], const int id) const;
      int getEdgeTriangleD3_xnz(const SimplexId p[3], const int id) const;
      int getEdgeTriangleD3_xNz(const SimplexId p[3], const int id) const;

      int getEdgeTriangleD4_xyz(const SimplexId p[3], const int id) const;

      int getEdgeLinkL(const SimplexId p[3], const int id) const;
      int getEdgeLinkH(const SimplexId p[3], const int id) const;
      int getEdgeLinkP(const SimplexId p[3], const int id) const;
      int getEdgeLinkD1(const SimplexId p[3], const int id) const;
      int getEdgeLinkD2(const SimplexId p[3], const int id) const;
      int getEdgeLinkD3(const SimplexId p[3], const int id) const;
      int getEdgeLinkD4(const SimplexId p[3], const int id) const;

      int getEdgeStarL(const SimplexId p[3], const int id) const;
      int getEdgeStarH(const SimplexId p[3], const int id) const;
      int getEdgeStarP(const SimplexId p[3], const int id) const;
      int getEdgeStarD1(const SimplexId p[3], const int id) const;
      int getEdgeStarD2(const SimplexId p[3], const int id) const;
      int getEdgeStarD3(const SimplexId p[3], const int id) const;

      int getTriangleVertexF(const SimplexId p[3], const int id) const;
      int getTriangleVertexH(const SimplexId p[3], const int id) const;
      int getTriangleVertexC(const SimplexId p[3], const int id) const;
      int getTriangleVertexD1(const SimplexId p[3], const int id) const;
      int getTriangleVertexD2(const SimplexId p[3], const int id) const;
      int getTriangleVertexD3(const SimplexId p[3], const int id) const;

      int getTriangleEdgeF_0(const SimplexId p[3], const int id) const;
      int getTriangleEdgeF_1(const SimplexId p[3], const int id) const;
      int getTriangleEdgeH_0(const SimplexId p[3], const int id) const;
      int getTriangleEdgeH_1(const SimplexId p[3], const int id) const;
      int getTriangleEdgeC_0(const SimplexId p[3], const int id) const;
      int getTriangleEdgeC_1(const SimplexId p[3], const int id) const;
      int getTriangleEdgeD1_0(const SimplexId p[3], const int id) const;
      int getTriangleEdgeD1_1(const SimplexId p[3], const int id) const;
      int getTriangleEdgeD2_0(const SimplexId p[3], const int id) const;
      int getTriangleEdgeD2_1(const SimplexId p[3], const int id) const;
      int getTriangleEdgeD3_0(const SimplexId p[3], const int id) const;
      int getTriangleEdgeD3_1(const SimplexId p[3], const int id) const;

      int getTriangleLinkF(const SimplexId p[3], const int id) const;
      int getTriangleLinkH(const SimplexId p[3], const int id) const;
      int getTriangleLinkC(const SimplexId p[3], const int id) const;
      int getTriangleLinkD1(const SimplexId p[3], const int id) const;
      int getTriangleLinkD2(const SimplexId p[3], const int id) const;
      int getTriangleLinkD3(const SimplexId p[3], const int id) const;

      int getTriangleStarF(const SimplexId p[3], const int id) const;
      int getTriangleStarH(const SimplexId p[3], const int id) const;
      int getTriangleStarC(const SimplexId p[3], const int id) const;
      int getTriangleStarD1(const SimplexId p[3], const int id) const;
      int getTriangleStarD2(const SimplexId p[3], const int id) const;
      int getTriangleStarD3(const SimplexId p[3], const int id) const;

      int getTetrahedronVertexABCG(const SimplexId p[3], const int id) const;
      int getTetrahedronVertexBCDG(const SimplexId p[3], const int id) const;
      int getTetrahedronVertexABEG(const SimplexId p[3], const int id) const;
      int getTetrahedronVertexBEFG(const SimplexId p[3], const int id) const;
      int getTetrahedronVertexBFGH(const SimplexId p[3], const int id) const;
      int getTetrahedronVertexBDGH(const SimplexId p[3], const int id) const;

      int getTetrahedronEdgeABCG(const SimplexId p[3], const int id) const;
      int getTetrahedronEdgeBCDG(const SimplexId p[3], const int id) const;
      int getTetrahedronEdgeABEG(const SimplexId p[3], const int id) const;
      int getTetrahedronEdgeBEFG(const SimplexId p[3], const int id) const;
      int getTetrahedronEdgeBFGH(const SimplexId p[3], const int id) const;
      int getTetrahedronEdgeBDGH(const SimplexId p[3], const int id) const;

      int getTetrahedronTriangleABCG(const SimplexId p[3], const int id) const;
      int getTetrahedronTriangleBCDG(const SimplexId p[3], const int id) const;
      int getTetrahedronTriangleABEG(const SimplexId p[3], const int id) const;
      int getTetrahedronTriangleBEFG(const SimplexId p[3], const int id) const;
      int getTetrahedronTriangleBFGH(const SimplexId p[3], const int id) const;
      int getTetrahedronTriangleBDGH(const SimplexId p[3], const int id) const;

      int getTetrahedronNeighborABCG(const SimplexId t, const SimplexId p[3], const int id) const;
      int getTetrahedronNeighborBCDG(const SimplexId t, const SimplexId p[3], const int id) const;
      int getTetrahedronNeighborABEG(const SimplexId t, const SimplexId p[3], const int id) const;
      int getTetrahedronNeighborBEFG(const SimplexId t, const SimplexId p[3], const int id) const;
      int getTetrahedronNeighborBFGH(const SimplexId t, const SimplexId p[3], const int id) const;
      int getTetrahedronNeighborBDGH(const SimplexId t, const SimplexId p[3], const int id) const;
      //\endcond
  };
}

inline void ttk::ImplicitTriangulation::vertexToPosition2d(const SimplexId vertex,
SimplexId p[2]) const{
  if(isAccelerated_){
    p[0]=vertex&mod_[0];
    p[1]=vertex>>div_[0];
  }
  else{
    p[0]=vertex%vshift_[0];
    p[1]=vertex/vshift_[0];
  }
}

inline void ttk::ImplicitTriangulation::edgeToPosition2d(const SimplexId edge,
const int k, SimplexId p[2]) const{
  const int e=(k)?edge-esetshift_[k-1]:edge;
  p[0]=e%eshift_[2*k];
  p[1]=e/eshift_[2*k];
}

inline void ttk::ImplicitTriangulation::triangleToPosition2d(const SimplexId triangle,
SimplexId p[2]) const{
  p[0]=triangle%tshift_[0];
  p[1]=triangle/tshift_[0];
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dA(const SimplexId v,
const int id) const{
  //V(a)={b,c}
  switch(id){
    case 0: return v+1;//b
    case 1: return v+vshift_[0];//c
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dB(const SimplexId v,
const int id) const{
  //V(b)={a,c,d}
  switch(id){
    case 0: return v-1;//a
    case 1: return v+vshift_[0];//d
    case 2: return v+vshift_[0]-1;//c
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dC(const SimplexId v,
const int id) const{
  //V(c)={a,b,d}
  switch(id){
    case 0: return v+1;//d
    case 1: return v-vshift_[0];//a
    case 2: return v-vshift_[0]+1;//b
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dD(const SimplexId v,
const int id) const{
  //V(d)={c,b}
  switch(id){
    case 0: return v-1;//c
    case 1: return v-vshift_[0];//b
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dAB(const SimplexId v,
const int id) const{
  //V(ab)=V(b)::{a,c,d}+V(a)::{b}
  switch(id){
    case 0: return v-1;//V(b)::a
    case 1: return v+vshift_[0]-1;//V(b)::c
    case 2: return v+vshift_[0];//V(b)::d
    case 3: return v+1;//V(a)::b
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dCD(const SimplexId v,
const int id) const{
  //V(cd)=V(c)::{a,b,d}+V(d)::{c}
  switch(id){
    case 0: return v-1;//V(d)::c
    case 1: return v-vshift_[0];//V(c)::a
    case 2: return v-vshift_[0]+1;//V(c)::b
    case 3: return v+1;//V(c)::d
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dAC(const SimplexId v,
const int id) const{
  //V(ac)=V(c)::{a,b,d}+V(a)::{c}
  switch(id){
    case 0: return v-vshift_[0];//V(c)::{a}
    case 1: return v-vshift_[0]+1;//V(c)::{b}
    case 2: return v+1;//V(c)::{d}
    case 3: return v+vshift_[0];//V(a)::{c}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dBD(const SimplexId v,
const int id) const{
  //V(bd)=V(b)::{c,d}+V(d)::{b,c}
  switch(id){
    case 0: return v+vshift_[0]-1;//V(b)::{c}
    case 1: return v+vshift_[0];//V(b)::{d}
    case 2: return v-vshift_[0];//V(d)::{b}
    case 3: return v-1;//V(d)::{c}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighbor2dABCD(const SimplexId v,
const int id) const{
  //V(abcd)=V(d)::{b,c}+V(c)::{b,d}+V(a)::{b}+V(b)::{c}
  switch(id){
    case 0: return v-1;
    case 1: return v-vshift_[0];
    case 2: return v-vshift_[0]+1;
    case 3: return v+1;
    case 4: return v+vshift_[0];
    case 5: return v+vshift_[0]-1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dA(const SimplexId p[2],
const int id) const{
  //V(a)={b,c}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0];//ab-L
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2];//ac-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dB(const SimplexId p[2],
const int id) const{
  //V(b)={a,c,d}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]-1;//ba-L
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2];//bd-H
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]-1;//bc-D1
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dC(const SimplexId p[2],
const int id) const{
  //V(c)={a,b,d}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2];//ca-H
    case 1: return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4];//cb-D1
    case 2: return p[0]+p[1]*eshift_[0];//cd-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dD(const SimplexId p[2],
const int id) const{
  //V(d)={c,b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]-1;//dc-L
    case 1: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2];//db-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dAB(const SimplexId p[2],
const int id) const{
  //V(ab)=V(b)::{a,c,d}+V(a)::{b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]-1;//ba-L
    case 1: return esetshift_[1]+p[0]+p[1]*eshift_[4]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2];//bd-H
    case 3: return p[0]+p[1]*eshift_[0];//ab-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dCD(const SimplexId p[2],
const int id) const{
  //V(cd)=V(c)::{a,b,d}+V(d)::{c}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2];//ca-H
    case 1: return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4];//cb-D1
    case 2: return p[0]+p[1]*eshift_[0];//cd-L
    case 3: return p[0]+p[1]*eshift_[0]-1;//dc-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dAC(const SimplexId p[2],
const int id) const{
  //V(ac)=V(c)::{a,b,d}+V(a)::{c}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2];//ca-H
    case 1: return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4];//cb-D1
    case 2: return p[0]+p[1]*eshift_[0];//cd-L
    case 3: return esetshift_[0]+p[0]+p[1]*eshift_[2];//ac-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dBD(const SimplexId p[2],
const int id) const{
  //V(bd)=V(b)::{c,d}+V(d)::{b,c}
  switch(id){
    case 0: return esetshift_[1]+p[0]+p[1]*eshift_[4]-1;//bc-D1
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2];//bd-H
    case 2: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2];//db-H
    case 3: return p[0]+p[1]*eshift_[0]-1;//dc-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdge2dABCD(const SimplexId p[2],
const int id) const{
  //V(abcd)=V(d)::{b,c}+V(c)::{b,d}+V(a)::{c}+V(b)::{c}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2];//db-H
    case 1: return p[0]+p[1]*eshift_[0]-1;//dc-L
    case 2: return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4];//cb-D1
    case 3: return p[0]+p[1]*eshift_[0];//cd-L
    case 4: return esetshift_[0]+p[0]+p[1]*eshift_[2];//ac-H
    case 5: return esetshift_[1]+p[0]+p[1]*eshift_[4]-1;//bc-D1
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dA(const SimplexId p[2],
const int id) const{
  return p[0]*2+p[1]*tshift_[0];
}

inline int ttk::ImplicitTriangulation::getVertexStar2dB(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0];
    case 1: return (p[0]-1)*2+p[1]*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dC(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0];
    case 1: return p[0]*2+(p[1]-1)*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dD(const SimplexId p[2],
const int id) const{
  return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dAB(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0];
    case 1: return (p[0]-1)*2+p[1]*tshift_[0]+1;
    case 2: return p[0]*2+p[1]*tshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dCD(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0];
    case 1: return p[0]*2+(p[1]-1)*tshift_[0]+1;
    case 2: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dAC(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0];
    case 1: return p[0]*2+(p[1]-1)*tshift_[0]+1;
    case 2: return p[0]*2+p[1]*tshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dBD(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0];
    case 1: return (p[0]-1)*2+p[1]*tshift_[0]+1;
    case 2: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStar2dABCD(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0];
    case 1: return (p[0]-1)*2+p[1]*tshift_[0]+1;
    case 2: return p[0]*2+p[1]*tshift_[0];
    case 3: return p[0]*2+(p[1]-1)*tshift_[0];
    case 4: return p[0]*2+(p[1]-1)*tshift_[0]+1;
    case 5: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLink2dA(const SimplexId p[2],
const int id) const{
  return esetshift_[1]+p[0]+p[1]*eshift_[4];//D1::bc
}

inline int ttk::ImplicitTriangulation::getVertexLink2dB(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]+p[1]*eshift_[2]-1;//H::ac
    case 1: return p[0]+(p[1]+1)*eshift_[0]-1;//L::ab
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLink2dC(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+1;//H::ac
    case 1: return p[0]+(p[1]-1)*eshift_[0];//L::ab
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLink2dD(const SimplexId p[2],
const int id) const{
  return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4]-1;//D1::bc
}

inline int ttk::ImplicitTriangulation::getVertexLink2dAB(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]+p[1]*eshift_[2]-1;//H::ac
    case 1: return p[0]+(p[1]+1)*eshift_[0]-1;//L::ab
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4];//D1::bc
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLink2dCD(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+1;//H::ac
    case 1: return p[0]+(p[1]-1)*eshift_[0];//L::ab
    case 2: return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4]-1;//D1::bc
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLink2dAC(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+1;//H::ac
    case 1: return p[0]+(p[1]-1)*eshift_[0];//L::ab
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4];//D1::bc
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLink2dBD(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]+p[1]*eshift_[2]-1;//H::ac
    case 1: return p[0]+(p[1]+1)*eshift_[0]-1;//L::ab
    case 2: return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4]-1;//D1::bc
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLink2dABCD(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]+p[1]*eshift_[2]-1;//H::ac
    case 1: return p[0]+(p[1]+1)*eshift_[0]-1;//L::ab
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4];//D1::bc
    case 3: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+1;//H::ac
    case 4: return p[0]+(p[1]-1)*eshift_[0];//L::ab
    case 5: return esetshift_[1]+p[0]+(p[1]-1)*eshift_[4]-1;//D1::bc
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_x0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[Di_]*2;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xn(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[Di_]*2+p[Dj_]*tshift_[0];
    case 1: return p[Di_]*2+(p[Dj_]-1)*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xN(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[Di_]*2+(p[Dj_]-1)*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_0y(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[Dj_]*tshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_ny(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[Di_]*2+p[Dj_]*tshift_[0];
    case 1: return (p[Di_]-1)*2+p[Dj_]*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_Ny(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[Di_]-1)*2+p[Dj_]*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD1_xy(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[Di_]*2+p[Dj_]*tshift_[0];
    case 1: return p[Di_]*2+p[Dj_]*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLink2dL(const SimplexId p[2],
const int id) const{
  if(p[1]>0 and p[1]<nbvoxels_[Dj_]){
    switch(id){
      case 0: return p[0]+(p[1]+1)*vshift_[0];
      case 1: return p[0]+(p[1]-1)*vshift_[0]+1;
    }
  }
  else if(p[1]==0) return p[0]+vshift_[0];
  else return p[0]+(p[1]-1)*vshift_[0]+1;
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLink2dH(const SimplexId p[2],
const int id) const{
  if(p[0]>0 and p[0]<nbvoxels_[Di_]){
    switch(id){
      case 0: return p[0]+p[1]*vshift_[0]+1;
      case 1: return p[0]+(p[1]+1)*vshift_[0]-1;
    }
  }
  else if(p[0]==0) return p[1]*vshift_[0]+1;
  else return p[0]+(p[1]+1)*vshift_[0]-1;
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLink2dD1(const SimplexId p[2],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*vshift_[0];
    case 1: return p[0]+(p[1]+1)*vshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStar2dL(const SimplexId p[2],
const int id) const{
  if(p[1]>0 and p[1]<nbvoxels_[Dj_]){
    if(id==0) return p[0]*2+p[1]*tshift_[0];
    else return p[0]*2+(p[1]-1)*tshift_[0]+1;
  }
  else if(p[1]==0) return p[0]*2+p[1]*tshift_[0];
  else return p[0]*2+(p[1]-1)*tshift_[0]+1;

  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStar2dH(const SimplexId p[2],
const int id) const{
  if(p[0]>0 and p[0]<nbvoxels_[Di_]){
    if(id==0) return p[0]*2+p[1]*tshift_[0];
    else return (p[0]-1)*2+p[1]*tshift_[0]+1;
  }
  else if(p[0]==0) return p[0]*2+p[1]*tshift_[0];
  else return (p[0]-1)*2+p[1]*tshift_[0]+1;
  return -1;
}

inline void ttk::ImplicitTriangulation::vertexToPosition(const SimplexId vertex,
SimplexId p[3]) const{
  if(isAccelerated_){
    p[0]=vertex&mod_[0];
    p[1]=(vertex&mod_[1])>>div_[0];
    p[2]=vertex>>div_[1];
  }
  else{
    p[0]=vertex%vshift_[0];
    p[1]=(vertex%vshift_[1])/vshift_[0];
    p[2]=vertex/vshift_[1];
  }
}

inline void ttk::ImplicitTriangulation::edgeToPosition(const SimplexId edge,
const int k, SimplexId p[3]) const{
  const int e=(k)?edge-esetshift_[k-1]:edge;
  p[0]=e%eshift_[2*k];
  p[1]=(e%eshift_[2*k+1])/eshift_[2*k];
  p[2]=e/eshift_[2*k+1];
}

inline void ttk::ImplicitTriangulation::triangleToPosition(const SimplexId triangle,
const int k, SimplexId p[3]) const{
  const SimplexId t=(k)?triangle-tsetshift_[k-1]:triangle;
  p[0]=t%tshift_[2*k];
  p[1]=(t%tshift_[2*k+1])/tshift_[2*k];
  p[2]=t/tshift_[2*k+1];
}

inline void ttk::ImplicitTriangulation::tetrahedronToPosition(
const SimplexId tetrahedron, SimplexId p[3]) const{
  p[0]=(tetrahedron%tetshift_[0])/6;
  p[1]=(tetrahedron%tetshift_[1])/tetshift_[0];
  p[2]=tetrahedron/tetshift_[1];
}

inline int ttk::ImplicitTriangulation::getVertexNeighborA(const SimplexId v,
const int id) const{
  // V(a)={b,c,e,g}
  switch(id){
    case 0: return v+1;//b
    case 1: return v+vshift_[0];//c
    case 2: return v+vshift_[1];//e
    case 3: return v+vshift_[0]+vshift_[1];//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborB(const SimplexId v,
const int id) const{
  // V(b)={a,c,d,e,f,g,h}
  switch(id){
    case 0: return v-1;//a
    case 1: return v-1+vshift_[0];//c
    case 2: return v+vshift_[0];//d
    case 3: return v-1+vshift_[1];//e
    case 4: return v+vshift_[1];  //f
    case 5: return v-1+vshift_[0]+vshift_[1];  //g
    case 6: return v+vshift_[0]+vshift_[1];//h
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborC(const SimplexId v,
const int id) const{
  // V(c)={a,b,d,g}
  switch(id){
    case 0: return v-vshift_[0];//a
    case 1: return v+1-vshift_[0];//b
    case 2: return v+1;//d
    case 3: return v+vshift_[1];//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborD(const SimplexId v,
const int id) const{
  // V(d)={b,c,g,h}
  switch(id){
    case 0: return v-vshift_[0];//b
    case 1: return v-1;//c
    case 2: return v-1+vshift_[1];//g
    case 3: return v+vshift_[1];//h
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborE(const SimplexId v,
const int id) const{
  // V(e)={a,b,f,g}
  switch(id){
    case 0: return v-vshift_[1];//a
    case 1: return v+1-vshift_[1];//b
    case 2: return v+1;//f
    case 3: return v+vshift_[0];//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborF(const SimplexId v,
const int id) const{
  // V(f)={b,e,g,h}
  switch(id){
    case 0: return v-vshift_[1];//b
    case 1: return v-1;//e
    case 2: return v-1+vshift_[0];//g
    case 3: return v+vshift_[0];//h
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborG(const SimplexId v,
const int id) const{
  // V(g)={a,b,c,d,e,f,h}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborH(const SimplexId v,
const int id) const{
  // V(h)={b,d,f,g}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//b
    case 1: return v-vshift_[1];//d
    case 2: return v-vshift_[0];//f
    case 3: return v-1;//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborAB(const SimplexId v,
const int id) const{
  // V(ab)=V(b)+V(a)::{b}
  switch(id){
    case 0: return v-1;//a
    case 1: return v-1+vshift_[0];//c
    case 2: return v+vshift_[0];//d
    case 3: return v-1+vshift_[1];//e
    case 4: return v+vshift_[1];  //f
    case 5: return v-1+vshift_[0]+vshift_[1];  //g
    case 6: return v+vshift_[0]+vshift_[1];//h
    case 7: return v+1;//V(a)::{b}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborCD(const SimplexId v,
const int id) const{
  // V(cd)=V(d)+V(c)::{b,d}
  switch(id){
    case 0: return v-vshift_[0];//b
    case 1: return v-1;//c
    case 2: return v-1+vshift_[1];//g
    case 3: return v+vshift_[1];//h
    case 4: return v+1-vshift_[0];//V(c)::{b}
    case 5: return v+1;//V(c)::{d}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborEF(const SimplexId v,
const int id) const{
  // V(ef)=V(f)+V(e)::{b,f}
  switch(id){
    case 0: return v-vshift_[1];//b
    case 1: return v-1;//e
    case 2: return v-1+vshift_[0];//g
    case 3: return v+vshift_[0];//h
    case 4: return v+1-vshift_[1];//V(e)::{b}
    case 5: return v+1;//V(e)::{f}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborGH(const SimplexId v,
const int id) const{
  // V(gh)=V(g)+V(h)::{g}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
    case 7: return v-1;//V(h)::{g}
  }

  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborAC(const SimplexId v,
const int id) const{
  // V(ac)=V(c)+V(a)::{c,g}
  switch(id){
    case 0: return v-vshift_[0];//a
    case 1: return v+1-vshift_[0];//b
    case 2: return v+1;//d
    case 3: return v+vshift_[1];//g
    case 4: return v+vshift_[0];//V(a)::{c}
    case 5: return v+vshift_[0]+vshift_[1];//V(a)::{c}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborBD(const SimplexId v,
const int id) const{
  // V(bd)=V(b)+V(d)::{b}
  switch(id){
    case 0: return v-1;//a
    case 1: return v-1+vshift_[0];//c
    case 2: return v+vshift_[0];//d
    case 3: return v-1+vshift_[1];//e
    case 4: return v+vshift_[1];  //f
    case 5: return v-1+vshift_[0]+vshift_[1];  //g
    case 6: return v+vshift_[0]+vshift_[1];//h
    case 7: return v-vshift_[0];//V(d)::{b}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborEG(const SimplexId v,
const int id) const{
  //V(eg)=V(g)+V(e)::{g}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
    case 7: return v+vshift_[0];//V(e)::{g}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborFH(const SimplexId v,
const int id) const{
  //V(fh)=V(f)+V(h)::{b,f}
  switch(id){
    case 0: return v-vshift_[1];//b
    case 1: return v-1;//e
    case 2: return v-1+vshift_[0];//g
    case 3: return v+vshift_[0];//h
    case 4: return v-vshift_[0]-vshift_[1];//V(h)::{b}
    case 5: return v-vshift_[0];//V(h)::{f}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborAE(const SimplexId v,
const int id) const{
  //V(ae)=V(a)+V(e)::{a,b}
  switch(id){
    case 0: return v+1;//b
    case 1: return v+vshift_[0];//c
    case 2: return v+vshift_[1];//e
    case 3: return v+vshift_[0]+vshift_[1];//g
    case 4: return v-vshift_[1];//V(e)::{a}
    case 5: return v+1-vshift_[1];//V(e)::{b}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborBF(const SimplexId v,
const int id) const{
  //V(bf)=V(b)+V(f)::{b}
  switch(id){
    case 0: return v-1;//a
    case 1: return v-1+vshift_[0];//c
    case 2: return v+vshift_[0];//d
    case 3: return v-1+vshift_[1];//e
    case 4: return v+vshift_[1];  //f
    case 5: return v-1+vshift_[0]+vshift_[1];  //g
    case 6: return v+vshift_[0]+vshift_[1];//h
    case 7: return v-vshift_[1];//V(f)::{b}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborCG(const SimplexId v,
const int id) const{
  //V(cg)=V(g)+V(c)::{g}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
    case 7: return v+vshift_[1];//V(c)::{g}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborDH(const SimplexId v,
const int id) const{
  //V(dh)=V(d)+V(h)::{b,d}
  switch(id){
    case 0: return v-vshift_[0];//b
    case 1: return v-1;//c
    case 2: return v-1+vshift_[1];//g
    case 3: return v+vshift_[1];//h
    case 4: return v-vshift_[0]-vshift_[1];//V(h)::{b}
    case 5: return v-vshift_[1];//V(h)::{d}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborABDC(const SimplexId v,
const int id) const{
  //V(abdc)=V(b)+V(d)::{b}+V(c)::{b}+V(a)::{b}
  switch(id){
    case 0: return v-1;//a
    case 1: return v-1+vshift_[0];//c
    case 2: return v+vshift_[0];//d
    case 3: return v-1+vshift_[1];//e
    case 4: return v+vshift_[1];  //f
    case 5: return v-1+vshift_[0]+vshift_[1];  //g
    case 6: return v+vshift_[0]+vshift_[1];//h
    case 7: return v-vshift_[0];//V(d)::{b}
    case 8: return v+1-vshift_[0];//V(c)::{b}
    case 9: return v+1;//V(a)::{b}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborEFHG(const SimplexId v,
const int id) const{
  //V(efhg)=V(g)+V(h)::{g}+V(f)::{g,h}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
    case 7: return v-1;//V(h)::{g}
    case 8: return v-1+vshift_[0];//V(f)::{g}
    case 9: return v+vshift_[0];//V(f)::{h}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborAEGC(const SimplexId v,
const int id) const{
  //V(aegc)=V(g)+V(a)::{c,g}+V(c)::{g}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
    case 7: return v+vshift_[0];//V(a)::{c}
    case 8: return v+vshift_[0]+vshift_[1];//V(a)::{g}
    case 9: return v+vshift_[1];//V(c)::{g}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborBFHD(const SimplexId v,
const int id) const{
  //V(bfhd)=V(b)+V(f)::{b}+V(h)::{b}+V(d)::{b}
  switch(id){
    case 0: return v-1;//a
    case 1: return v-1+vshift_[0];//c
    case 2: return v+vshift_[0];//d
    case 3: return v-1+vshift_[1];//e
    case 4: return v+vshift_[1];  //f
    case 5: return v-1+vshift_[0]+vshift_[1];  //g
    case 6: return v+vshift_[0]+vshift_[1];//h
    case 7: return v-vshift_[1];//V(f)::{b}
    case 8: return v-vshift_[0]-vshift_[1];//V(h)::{b}
    case 9: return v-vshift_[0];//V(d)::{b}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborAEFB(const SimplexId v,
const int id) const{
  //V(aefb)=V(b)+V(a)::{b}+V(e)::{b}+V(f)::{b}
  switch(id){
    case 0: return v-1;//a
    case 1: return v-1+vshift_[0];//c
    case 2: return v+vshift_[0];//d
    case 3: return v-1+vshift_[1];//e
    case 4: return v+vshift_[1];  //f
    case 5: return v-1+vshift_[0]+vshift_[1];  //g
    case 6: return v+vshift_[0]+vshift_[1];//h
    case 7: return v+1;//V(a)::{b}
    case 8: return v+1-vshift_[1];//V(e)::{b}
    case 9: return v-vshift_[1];//V(f)::{b}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborGHDC(const SimplexId v,
const int id) const{
  //V(ghdc)=V(g)+V(h)::{g}+V(d)::{g,h}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
    case 7: return v-1;//V(h)::{g}
    case 8: return v-1+vshift_[1];//V(d)::{g}
    case 9: return v+vshift_[1];//V(d)::{h}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexNeighborABCDEFGH(
const SimplexId v,const int id) const{
  //V(abcdefgh)=V(g)+V(d)::{g,h}+V(h)::{g}+V(b)::{c,d,g,h}
  switch(id){
    case 0: return v-vshift_[0]-vshift_[1];//a
    case 1: return v+1-vshift_[0]-vshift_[1];//b
    case 2: return v-vshift_[1];//c
    case 3: return v+1-vshift_[1];//d
    case 4: return v-vshift_[0];//e
    case 5: return v+1-vshift_[0];//f
    case 6: return v+1;//h
    case 7: return v-1+vshift_[1];//V(d)::{g}
    case 8: return v+vshift_[1];//V(d)::{h}
    case 9: return v-1;//V(h)::{g}
    case 10: return v-1+vshift_[0];//V(b)::{c}
    case 11: return v+vshift_[0];//V(b)::{d}
    case 12: return v-1+vshift_[0]+vshift_[1];//V(b)::{g}
    case 13: return v+vshift_[0]+vshift_[1];//V(b)::{h}
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeA(const SimplexId p[3],
const int id) const{
  // V(a)={b,c,e,g}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ab-L
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//ac-H
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeB(const SimplexId p[3],
const int id) const{
  // V(b)={a,c,d,e,f,g,h}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//ba-L
    case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//be-D3
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//bf-P
    case 5: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 6: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeC(const SimplexId p[3],
const int id) const{
  // V(c)={a,b,d,g}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ca-H
    case 1: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//cb-D1
    case 2: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//cd-L
    case 3: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//cg-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeD(const SimplexId p[3],
const int id) const{
  // V(d)={b,c,g,h}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//db-H
    case 1: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//dc-L
    case 2: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//dg-D3
    case 3: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//dh-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeE(const SimplexId p[3],
const int id) const{
  // V(e)={a,b,f,g}
  switch(id){
    case 0: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//ea-P
    case 1: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//eb-D3
    case 2: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ef-L
    case 3: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//eg-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeF(const SimplexId p[3],
const int id) const{
  // V(f)={b,e,g,h}
  switch(id){
    case 0: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//fb-P
    case 1: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//fe-L
    case 2: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//fg-D1
    case 3: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//fh-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeG(const SimplexId p[3],
const int id) const{
  // V(g)={a,b,c,d,e,f,h}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeH(const SimplexId p[3],
const int id) const{
  // V(h)={b,d,f,g}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//hb-D2
    case 1: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//hd-P
    case 2: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//hf-H
    case 3: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//hg-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeAB(const SimplexId p[3],
const int id) const{
  // V(ab)=V(b)+V(a)::{b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//ba-L
    case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[11]+p[2]*eshift_[12]-1;//be-D3
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//bf-P
    case 5: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 6: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
    case 7: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ab-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeCD(const SimplexId p[3],
const int id) const{
  // V(cd)=V(d)+V(c)::{b,d}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//db-H
    case 1: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//dc-L
    case 2: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//dg-D3
    case 3: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//dh-P
    case 4: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//cb-D1
    case 5: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//cd-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeEF(const SimplexId p[3],
const int id) const{
  // V(fe)=V(f)+V(e)::{b,f}
  switch(id){
    case 0: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//fb-P
    case 1: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//fe-L
    case 2: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//fg-D1
    case 3: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//fh-H
    case 4: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//eb-D3
    case 5: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ef-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeGH(const SimplexId p[3],
const int id) const{
  // V(gh)=V(g)+V(h)::{g}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
    case 7: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//hg-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeAC(const SimplexId p[3],
const int id) const{
  // V(ac)=V(c)+V(a)::{c,g}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ca-H
    case 1: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//cb-D1
    case 2: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//cd-L
    case 3: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//cg-P
    case 4: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//ac-H
    case 5: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeBD(const SimplexId p[3],
const int id) const{
  // V(bd)=V(b)+V(d)::{b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//ba-L
    case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//be-D3
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//bf-P
    case 5: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 6: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
    case 7: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//db-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeEG(const SimplexId p[3],
const int id) const{
  //V(eg)=V(g)+V(e)::{g}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
    case 7: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//eg-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeFH(const SimplexId p[3],
const int id) const{
  //V(fh)=V(f)+V(h)::{b,f}
  switch(id){
    case 0: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//fb-P
    case 1: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//fe-L
    case 2: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//fg-D1
    case 3: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//fh-H
    case 4: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//hb-D2
    case 5: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//hf-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeAE(const SimplexId p[3],
const int id) const{
  //V(ae)=V(a)+V(e)::{a,b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ab-L
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//ac-H
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//ea-P
    case 5: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//eb-D3
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeBF(const SimplexId p[3],
const int id) const{
  //V(bf)=V(b)+V(f)::{b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//ba-L
    case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//be-D3
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//bf-P
    case 5: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 6: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
    case 7: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//fb-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeCG(const SimplexId p[3],
const int id) const{
  //V(cg)=V(g)+V(c)::{g}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
    case 7: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//cg-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeDH(const SimplexId p[3],
const int id) const{
  //V(dh)=V(d)+V(h)::{b,d}
  switch(id){
    case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//db-H
    case 1: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//dc-L
    case 2: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//dg-D3
    case 3: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//dh-P
    case 4: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//hb-D2
    case 5: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//hd-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeABDC(const SimplexId p[3],
const int id) const{
  //V(abdc)=V(b)+V(d)::{b}+V(c)::{b}+V(a)::{b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//ba-L
    case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//be-D3
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//bf-P
    case 5: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 6: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
    case 7: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//db-H
    case 8: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//cb-D1
    case 9: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ab-L
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeEFHG(const SimplexId p[3],
const int id) const{
  //V(efhg)=V(g)+V(h)::{g}+V(f)::{g,h}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
    case 7: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//hg-L
    case 8: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//fg-D1
    case 9: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//fh-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeAEGC(const SimplexId p[3],
const int id) const{
  //V(aegc)=V(g)+V(a)::{c,g}+V(c)::{g}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
    case 7: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//ac-H
    case 8: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
    case 9: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//cg-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeBFHD(const SimplexId p[3],
const int id) const{
  //V(bfhd)=V(b)+V(f)::{b}+V(h)::{b}+V(d)::{b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//ba-L
    case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//be-D3
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//bf-P
    case 5: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 6: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
    case 7: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//fb-P
    case 8: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//hb-D2
    case 9: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//db-H
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeAEFB(const SimplexId p[3],
const int id) const{
  //V(aefb)=V(b)+V(a)::{b}+V(e)::{b}+V(f)::{b}
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//ba-L
    case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 2: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//be-D3
    case 4: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//bf-P
    case 5: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 6: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
    case 7: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ab-L
    case 8: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//eb-D3
    case 9: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//fb-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeGHDC(const SimplexId p[3],
const int id) const{
  //V(ghdc)=V(g)+V(h)::{g}+V(d)::{g,h}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
    case 7: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//hg-L
    case 8: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//dg-D3
    case 9: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//dh-P
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexEdgeABCDEFGH(
const SimplexId p[3],const int id) const{
  //V(abcdefgh)=V(g)+V(d)::{g,h}+V(h)::{g}+V(b)::{c,d,g,h}
  switch(id){
    case 0: return 
esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+(p[2]-1)*eshift_[9];//ga-D2
    case 1: return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+(p[2]-1)*eshift_[13];//gb-D4
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];//gc-P
    case 3: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];//gd-D3
    case 4: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3];//ge-H
    case 5: return 
esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];//gf-D1
    case 6: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//gh-L
    case 7: return 
esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11]-1;//dg-D3
    case 8: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//dh-P
    case 9: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1]-1;//hg-L
    case 10: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7]-1;//bc-D1
    case 11: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//bd-H
    case 12: return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13]-1;//bg-D4
    case 13: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//bh-D2
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleA(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 0;
    case 1: return tsetshift_[0];
    case 2: return tsetshift_[1];
    case 3: return tsetshift_[3];
    case 4: return tsetshift_[1]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleB(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2;
    case 2: return tsetshift_[2]+(p[0]-1)*2;
    case 3: return tsetshift_[3]+(p[0]-1)*2+1;
    case 4: return tsetshift_[1]+p[0]*2;
    case 5: return tsetshift_[1]+p[0]*2+1;
    case 6: return tsetshift_[4]+(p[0]-1)*2+1;
    case 7: return tsetshift_[0]+(p[0]-1)*2+1;
    case 8: return tsetshift_[2]+(p[0]-1)*2+1;
    case 9: return tsetshift_[3]+(p[0]-1)*2;
    case 10: return tsetshift_[0]+(p[0]-1)*2;
    case 11: return (p[0]-1)*2;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[1]-1)*tshift_[0];
    case 1: return (p[1]-1)*tshift_[0]+1;
    case 2: return tsetshift_[4]+(p[1]-1)*tshift_[10];
    case 3: return tsetshift_[0]+p[1]*tshift_[2];
    case 4: return tsetshift_[1]+(p[1]-1)*tshift_[4];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
    case 1: return tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6];
    case 2: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2];
    case 3: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4];
    case 4: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleE(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[2]-1)*tshift_[3];
    case 1: return tsetshift_[2]+(p[2]-1)*tshift_[7]+1;
    case 2: return tsetshift_[1]+(p[2]-1)*tshift_[5]+1;
    case 3: return p[2]*tshift_[1];
    case 4: return tsetshift_[0]+(p[2]-1)*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+(p[2]-1)*tshift_[3]+1;
    case 1: return (p[0]-1)*2+p[2]*tshift_[1];
    case 2: return (p[0]-1)*2+p[2]*tshift_[1]+1;
    case 3: return tsetshift_[4]+(p[0]-1)*2+(p[2]-1)*tshift_[11]+1;
    case 4: return tsetshift_[1]+p[0]*2+(p[2]-1)*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 1: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 5: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 6: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 7: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 8: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 9: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 10: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 11: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 1: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 2: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return 
tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleAB(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2;
    case 2: return tsetshift_[2]+(p[0]-1)*2;
    case 3: return tsetshift_[3]+(p[0]-1)*2+1;
    case 4: return tsetshift_[1]+p[0]*2;
    case 5: return tsetshift_[1]+p[0]*2+1;
    case 6: return tsetshift_[4]+(p[0]-1)*2+1;
    case 7: return tsetshift_[0]+(p[0]-1)*2+1;
    case 8: return tsetshift_[2]+(p[0]-1)*2+1;
    case 9: return tsetshift_[3]+(p[0]-1)*2;
    case 10: return tsetshift_[0]+(p[0]-1)*2;
    case 11: return (p[0]-1)*2;
    case 12: return p[0]*2;
    case 13: return tsetshift_[0]+p[0]*2;
    case 14: return tsetshift_[3]+p[0]*2;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleCD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
    case 1: return tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6];
    case 2: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2];
    case 3: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4];
    case 4: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+1;
    case 5: return p[0]*2+(p[1]-1)*tshift_[0];
    case 6: return p[0]*2+(p[1]-1)*tshift_[0]+1;
    case 7: return p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10];
    case 8: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleEF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+(p[2]-1)*tshift_[3]+1;
    case 1: return (p[0]-1)*2+p[2]*tshift_[1];
    case 2: return (p[0]-1)*2+p[2]*tshift_[1]+1;
    case 3: return tsetshift_[4]+(p[0]-1)*2+(p[2]-1)*tshift_[11]+1;
    case 4: return tsetshift_[1]+p[0]*2+(p[2]-1)*tshift_[5]+1;
    case 5: return p[0]*2+tsetshift_[0]+(p[2]-1)*tshift_[3];
    case 6: return p[0]*2+tsetshift_[2]+(p[2]-1)*tshift_[7]+1;
    case 7: return p[0]*2+p[2]*tshift_[1];
    case 8: return p[0]*2+tsetshift_[0]+(p[2]-1)*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleGH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 1: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 2: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return 
tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 5: return p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 6: return 
p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 7: return p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 8: return 
p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 9: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 10: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 11: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 12: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 13: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 14: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleAC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[1]-1)*tshift_[0];
    case 1: return (p[1]-1)*tshift_[0]+1;
    case 2: return tsetshift_[4]+(p[1]-1)*tshift_[10];
    case 3: return tsetshift_[0]+p[1]*tshift_[2];
    case 4: return tsetshift_[1]+(p[1]-1)*tshift_[4];
    case 5: return p[1]*tshift_[0];
    case 6: return tsetshift_[1]+p[1]*tshift_[4];
    case 7: return tsetshift_[3]+p[1]*tshift_[8];
    case 8: return tsetshift_[1]+p[1]*tshift_[4]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleBD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
    case 1: return tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6];
    case 2: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2];
    case 3: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4];
    case 4: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+1;
    case 5: return (p[0]-1)*2+p[1]*tshift_[0]+1;
    case 6: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10];
    case 7: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6];
    case 8: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+1;
    case 9: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4];
    case 10: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+1;
    case 11: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+1;
    case 12: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+1;
    case 13: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8];
    case 14: return (p[0]-1)*2+p[1]*tshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleEG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 1: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 5: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 6: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 7: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 8: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 9: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 10: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 11: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 12: return tsetshift_[2]+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 13: return tsetshift_[1]+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 14: return p[1]*tshift_[0]+p[2]*tshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleFH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 1: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 2: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return 
tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 5: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 6: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 7: return 
tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 8: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleAE(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[2]-1)*tshift_[3];
    case 1: return tsetshift_[2]+(p[2]-1)*tshift_[7]+1;
    case 2: return tsetshift_[1]+(p[2]-1)*tshift_[5]+1;
    case 3: return p[2]*tshift_[1];
    case 4: return tsetshift_[0]+(p[2]-1)*tshift_[3]+1;
    case 5: return tsetshift_[0]+p[2]*tshift_[3];
    case 6: return tsetshift_[1]+p[2]*tshift_[5];
    case 7: return tsetshift_[3]+p[2]*tshift_[9];
    case 8: return tsetshift_[1]+p[2]*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleBF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+(p[2]-1)*tshift_[3]+1;
    case 1: return (p[0]-1)*2+p[2]*tshift_[1];
    case 2: return (p[0]-1)*2+p[2]*tshift_[1]+1;
    case 3: return tsetshift_[4]+(p[0]-1)*2+(p[2]-1)*tshift_[11]+1;
    case 4: return tsetshift_[1]+p[0]*2+(p[2]-1)*tshift_[5]+1;
    case 5: return tsetshift_[4]+(p[0]-1)*2+p[2]*tshift_[11];
    case 6: return tsetshift_[2]+(p[0]-1)*2+p[2]*tshift_[7];
    case 7: return tsetshift_[3]+(p[0]-1)*2+p[2]*tshift_[9]+1;
    case 8: return tsetshift_[1]+p[0]*2+p[2]*tshift_[5];
    case 9: return tsetshift_[1]+p[0]*2+p[2]*tshift_[5]+1;
    case 10: return tsetshift_[4]+(p[0]-1)*2+p[2]*tshift_[11]+1;
    case 11: return tsetshift_[0]+(p[0]-1)*2+p[2]*tshift_[3]+1;
    case 12: return tsetshift_[2]+(p[0]-1)*2+p[2]*tshift_[7]+1;
    case 13: return tsetshift_[3]+(p[0]-1)*2+p[2]*tshift_[9];
    case 14: return tsetshift_[0]+(p[0]-1)*2+p[2]*tshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleCG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 1: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 5: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 6: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 7: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 8: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 9: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 10: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 11: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 12: return tsetshift_[4]+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
    case 13: return tsetshift_[0]+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 14: return tsetshift_[1]+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleDH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 1: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 2: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return 
tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 5: return tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];
    case 6: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 7: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
    case 8: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleABDC(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10];
    case 2: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6];
    case 3: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+1;
    case 4: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4];
    case 5: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+1;
    case 6: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+1;
    case 7: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+1;
    case 8: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+1;
    case 9: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8];
    case 10: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2];
    case 11: return (p[0]-1)*2+p[1]*tshift_[0];
    case 12: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+1;
    case 13: return tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6];
    case 14: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4];
    case 15: return p[0]*2+(p[1]-1)*tshift_[0];
    case 16: return p[0]*2+(p[1]-1)*tshift_[0]+1;
    case 17: return p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10];
    case 18: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2];
    case 19: return p[0]*2+p[1]*tshift_[0];
    case 20: return p[0]*2+tsetshift_[3]+p[1]*tshift_[8];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleEFHG(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 1: return 
p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return p[0]*2+tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return 
p[0]*2+tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 5: return 
p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 6: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 7: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 8: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 9: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 10: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 11: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 12: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 13: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 14: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 15: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 16: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 17: return 
tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 18: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 19: return p[0]*2+tsetshift_[2]+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 20: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleAEGC(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 1: return tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 5: return tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 6: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 7: return tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 8: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 9: return (p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 10: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 11: return tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 12: return tsetshift_[2]+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 13: return tsetshift_[1]+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 14: return p[1]*tshift_[0]+p[2]*tshift_[1];
    case 15: return tsetshift_[0]+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 16: return tsetshift_[1]+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 17: return tsetshift_[3]+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 18: return tsetshift_[1]+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 19: return tsetshift_[4]+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
    case 20: return tsetshift_[1]+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleBFHD(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+p[2]*tshift_[11];
    case 2: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+p[2]*tshift_[7];
    case 3: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+p[2]*tshift_[9]+1;
    case 4: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 5: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 6: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+p[2]*tshift_[11]+1;
    case 7: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 8: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;
    case 9: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 10: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 11: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 12: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 13: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];
    case 14: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
    case 15: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 16: return 
tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 17: return 
tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 18: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 19: return 
tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 20: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleAEFB(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[2]*tshift_[11];
    case 2: return tsetshift_[2]+(p[0]-1)*2+p[2]*tshift_[7];
    case 3: return tsetshift_[3]+(p[0]-1)*2+p[2]*tshift_[9]+1;
    case 4: return tsetshift_[1]+p[0]*2+p[2]*tshift_[5];
    case 5: return tsetshift_[1]+p[0]*2+p[2]*tshift_[5]+1;
    case 6: return tsetshift_[4]+(p[0]-1)*2+p[2]*tshift_[11]+1;
    case 7: return tsetshift_[0]+(p[0]-1)*2+p[2]*tshift_[3]+1;
    case 8: return tsetshift_[2]+(p[0]-1)*2+p[2]*tshift_[7]+1;
    case 9: return tsetshift_[3]+(p[0]-1)*2+p[2]*tshift_[9];
    case 10: return tsetshift_[0]+(p[0]-1)*2+p[2]*tshift_[3];
    case 11: return (p[0]-1)*2+p[2]*tshift_[1];
    case 12: return tsetshift_[0]+(p[0]-1)*2+(p[2]-1)*tshift_[3]+1;
    case 13: return tsetshift_[4]+(p[0]-1)*2+(p[2]-1)*tshift_[11]+1;
    case 14: return tsetshift_[1]+p[0]*2+(p[2]-1)*tshift_[5]+1;
    case 15: return p[0]*2+tsetshift_[0]+(p[2]-1)*tshift_[3];
    case 16: return p[0]*2+tsetshift_[2]+(p[2]-1)*tshift_[7]+1;
    case 17: return p[0]*2+p[2]*tshift_[1];
    case 18: return p[0]*2+tsetshift_[0]+(p[2]-1)*tshift_[3]+1;
    case 19: return p[0]*2+tsetshift_[0]+p[2]*tshift_[3];
    case 20: return p[0]*2+tsetshift_[3]+p[2]*tshift_[9];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleGHDC(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 1: return 
p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return p[0]*2+tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 3: return 
p[0]*2+tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 5: return 
p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 6: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 7: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 8: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 9: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 10: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 11: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 12: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 13: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 14: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 15: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];
    case 16: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 17: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
    case 18: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 19: return p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
    case 20: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+p[2]*tshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexTriangleABCDEFGH(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+p[2]*tshift_[11];
    case 2: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+p[2]*tshift_[7];
    case 3: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+p[2]*tshift_[9]+1;
    case 4: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 5: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 6: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+p[2]*tshift_[11]+1;
    case 7: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 8: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;
    case 9: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 10: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 11: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 12: return 
p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];
    case 13: return 
p[0]*2+tsetshift_[2]+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 14: return 
p[0]*2+tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];
    case 15: return 
p[0]*2+tsetshift_[1]+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 16: return 
p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9];
    case 17: return 
p[0]*2+tsetshift_[3]+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 18: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11];
    case 19: return 
p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 20: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1];
    case 21: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 22: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3];
    case 23: return p[0]*2+tsetshift_[0]+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 24: return (p[0]-1)*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 25: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];
    case 26: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
    case 27: return p[0]*2+tsetshift_[2]+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 28: return p[0]*2+tsetshift_[1]+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 29: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 30: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 31: return 
tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 32: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 33: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 34: return 
tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;
    case 35: return p[0]*2+tsetshift_[4]+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkA(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkB(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 1: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 2: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 3: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 4: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 5: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 1: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkE(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 1: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 1: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 1: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 2: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 3: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 4: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 5: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 1: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkAB(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
    case 2: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 3: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 4: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 5: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 6: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 7: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkCD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 1: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
    case 2: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 3: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkEF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 1: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 2: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 3: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkGH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 1: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 2: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 3: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 4: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 5: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
    case 6: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 7: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkAC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
    case 2: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 3: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkBD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 1: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 2: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 3: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 4: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 5: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
    case 6: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 7: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkEG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 1: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 2: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 3: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 4: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 5: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 6: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 7: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkFH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 1: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
    case 2: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 3: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkAE(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
    case 2: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 3: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkBF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 1: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 2: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 3: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 4: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 5: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
    case 6: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 7: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkCG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 1: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
    case 2: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 3: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 4: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 5: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 6: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 7: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkDH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
    case 2: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 3: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkABDC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
    case 2: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 3: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 4: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 5: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 6: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 7: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
    case 8: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 9: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
    case 10: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 11: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkEFHG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 1: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 2: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 3: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
    case 4: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 5: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
    case 6: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 7: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 8: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 9: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 10: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 11: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkAEGC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
    case 2: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 3: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 4: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 5: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 6: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 7: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 8: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 9: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
    case 10: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 11: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkBFHD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 1: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 2: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 3: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 4: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 5: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
    case 6: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 7: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
    case 8: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 9: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
    case 10: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 11: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkAEFB(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
    case 2: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 3: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 4: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 5: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
    case 6: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 7: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 8: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 9: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 10: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 11: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkGHDC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 1: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 2: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 3: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 4: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 5: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
    case 6: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 7: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
    case 8: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 9: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
    case 10: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 11: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexLinkABCDEFGH(
const SimplexId p[3],const int id) const{
  switch(id){
    case 0: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 1: return 
tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;//D1::beg
    case 2: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5];//C::acg
    case 3: return 
tsetshift_[1]+(p[0]-1)*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;//C::aeg
    case 4: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];//H::abe
    case 5: return 
tsetshift_[0]+(p[0]-1)*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;//H::bef
    case 6: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];//F::abc
    case 7: return (p[0]-1)*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;//F::bcd
    case 8: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9];//D2::abg
    case 9: return 
tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];//D1::bdg
    case 10: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];//D3::bcg
    case 11: return 
tsetshift_[3]+(p[0]-1)*2+(p[1]-1)*tshift_[8]+p[2]*tshift_[9]+1;//D2::bgh
    case 12: return 
tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9];//D2::abg
    case 13: return 
tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 14: return 
tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;//D1::beg
    case 15: return 
tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+(p[2]-1)*tshift_[9]+1;//D2::bgh
    case 16: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5];//C::acg
    case 17: return 
tsetshift_[1]+(p[0]+1)*2+(p[1]-1)*tshift_[4]+(p[2]-1)*tshift_[5]+1;//C::aeg
    case 18: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3];//H::abe
    case 19: return 
tsetshift_[0]+p[0]*2+(p[1]-1)*tshift_[2]+(p[2]-1)*tshift_[3]+1;//H::bef
    case 20: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1];//F::abc
    case 21: return p[0]*2+(p[1]-1)*tshift_[0]+(p[2]-1)*tshift_[1]+1;//F::bcd
    case 22: return 
tsetshift_[4]+(p[0]-1)*2+(p[1]-1)*tshift_[10]+(p[2]-1)*tshift_[11]+1;//D3::bfg
    case 23: return 
tsetshift_[2]+(p[0]-1)*2+(p[1]-1)*tshift_[6]+(p[2]-1)*tshift_[7];//D1::bdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarA(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//abcg
    case 1: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//abeg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarB(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//abcg
    case 1: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//bcdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//bcdg
    case 1: return (p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarE(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//abeg
    case 1: return p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//befg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//befg
    case 1: return (p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//bfgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarG(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id;
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//bfgh
    case 1: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarAB(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;//tet(b)
  switch(id){
    case 6: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//tet(a)::abcg
    case 7: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//tet(a)::abeg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarCD(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(d)::bcdg
    case 1: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//tet(d)::bdgh
    case 2: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//tet(c)::abcg
    case 3: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(c)::bcdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarEF(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(f)::befg
    case 1: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(f)::bfgh
    case 2: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//tet(e)::abeg
    case 3: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(e)::befg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarGH(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id;//tet(g)
  switch(id){
    case 6: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(h)::bfgh
    case 7: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//tet(h)::bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarAC(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//tet(c)::abcg
    case 1: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(c)::bcdg
    case 2: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//tet(a)::abcg
    case 3: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//tet(a)::abeg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarBD(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;//tet(b)
  switch(id){
    case 6: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(d)::bcdg
    case 7: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//tet(d)::bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarEG(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id;//tet(g)
  switch(id){
    case 6: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//tet(e)::abeg
    case 7: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(e)::befg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarFH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(h)::bfgh
    case 1: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//tet(h)::bdgh
    case 2: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(f)::befg
    case 3: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(f)::bfgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarAE(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//tet(e)::abeg
    case 1: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(e)::befg
    case 2: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//tet(a)::abcg
    case 3: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//tet(a)::abeg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarBF(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;//tet(b)
  switch(id){
    case 6: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(f)::befg
    case 7: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(f)::bfgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarCG(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id;//tet(g)
  switch(id){
    case 6: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//tet(c)::abcg
    case 7: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(c)::bcdg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarDH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(h)::bfgh
    case 1: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//tet(h)::bdgh
    case 2: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(d)::bcdg
    case 3: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//tet(d)::bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarABDC(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;//tet(b)
  switch(id){
    case 6: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(d)::bcdg
    case 7: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//tet(d)::bdgh
    case 8: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//tet(c)::abcg
    case 9: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(c)::bcdg
    case 10: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//tet(a)::abcg
    case 11: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//tet(a)::abeg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarEFHG(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id;//tet(g)
  switch(id){
    case 6: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(h)::bfgh
    case 7: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//tet(h)::bdgh
    case 8: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(f)::befg
    case 9: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(f)::bfgh
    case 10: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//tet(e)::abeg
    case 11: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(e)::befg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarAEGC(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id;//tet(g)
  switch(id){
    case 6: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//tet(c)::abcg
    case 7: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(c)::bcdg
    case 8: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//tet(a)::abcg
    case 9: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//tet(a)::abeg
    case 10: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//tet(e)::abeg
    case 11: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(e)::befg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarBFHD(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;//tet(b)
  switch(id){
    case 6: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(f)::befg
    case 7: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(f)::bfgh
    case 8: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(h)::bfgh
    case 9: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//tet(h)::bdgh
    case 10: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(d)::bcdg
    case 11: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//tet(d)::bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarAEFB(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;//tet(b)
  switch(id){
    case 6: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//tet(a)::abcg
    case 7: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//tet(a)::abeg
    case 8: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(f)::befg
    case 9: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(f)::bfgh
    case 10: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//tet(e)::abeg
    case 11: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(e)::befg
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarGHDC(const SimplexId p[3],
const int id) const{
  if(id>=0 && id<=5)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id;//tet(g)
  switch(id){
    case 6: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(h)::bfgh
    case 7: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//tet(h)::bdgh
    case 8: return p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//tet(c)::abcg
    case 9: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(c)::bcdg
    case 10: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(d)::bcdg
    case 11: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//tet(d)::bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getVertexStarABCDEFGH(
const SimplexId p[3],const int id) const{
  if(id>=0 && id<=5)
    return (p[0]-1)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+id;//tet(b)
  if(id>=6 && id<=11)
    return p[0]*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+id-6;//tet(g)
  switch(id){
    case 12: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1];//tet(a)::abcg
    case 13: return p[0]*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//tet(a)::abeg
    case 14: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1];//tet(c)::abcg
    case 15: return 
p[0]*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(c)::bcdg
    case 16: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//tet(d)::bcdg
    case 17: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//tet(d)::bdgh
    case 18: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+2;//tet(e)::abeg
    case 19: return 
p[0]*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(e)::befg
    case 20: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//tet(f)::befg
    case 21: return 
(p[0]-1)*6+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(f)::bfgh
    case 22: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//tet(h)::bfgh
    case 23: return 
(p[0]-1)*6+(p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+5;//tet(h)::bdgh
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_x00(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2;
    case 1: return tsetshift_[0]+p[0]*2;
    case 2: return tsetshift_[3]+p[0]*2;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_x0n(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+p[2]*tshift_[1];
    case 1: return tsetshift_[0]+p[0]*2+p[2]*tshift_[3];
    case 2: return tsetshift_[3]+p[0]*2+p[2]*tshift_[9];
    case 3: return tsetshift_[0]+p[0]*2+(p[2]-1)*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_x0N(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+p[2]*tshift_[1];
    case 1: return tsetshift_[0]+p[0]*2+(p[2]-1)*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xn0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+p[1]*tshift_[0];
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2];
    case 2: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8];
    case 3: return p[0]*2+(p[1]-1)*tshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xnn(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 2: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 3: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 4: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 5: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xnN(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 2: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 3: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xN0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0]+1;
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xNn(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 2: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
    case 3: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleL_xNN(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+(p[1]-1)*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+(p[2]-1)*tshift_[3]+1;
    case 2: return 
tsetshift_[3]+p[0]*2+(p[1]-1)*tshift_[8]+(p[2]-1)*tshift_[9]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_0y0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[1]*tshift_[0];
    case 1: return tsetshift_[1]+p[1]*tshift_[4];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_0yn(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 1: return tsetshift_[2]+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return p[1]*tshift_[0]+p[2]*tshift_[1];
    case 3: return tsetshift_[1]+p[1]*tshift_[4]+p[2]*tshift_[5];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_0yN(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 1: return tsetshift_[2]+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return p[1]*tshift_[0]+p[2]*tshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_ny0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0]+1;
    case 1: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6];
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4];
    case 3: return p[0]*2+p[1]*tshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_nyn(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+p[2]*tshift_[7];
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 3: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 4: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 5: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_nyN(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 1: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+(p[2]-1)*tshift_[7]+1;
    case 2: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 3: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_Ny0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0]+1;
    case 1: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6];
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_Nyn(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[2]+(p[0]-1)*2+p[1]*tshift_[6]+p[2]*tshift_[7];
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 3: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleH_NyN(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+(p[2]-1)*tshift_[5]+1;
    case 1: return (p[0]-1)*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_00z(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+p[2]*tshift_[3];
    case 1: return tsetshift_[1]+p[2]*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_0nz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
    case 1: return tsetshift_[4]+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
    case 2: return tsetshift_[0]+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 3: return tsetshift_[1]+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_0Nz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
    case 1: return tsetshift_[4]+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
    case 2: return tsetshift_[0]+p[1]*tshift_[2]+p[2]*tshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_n0z(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+p[2]*tshift_[3]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[2]*tshift_[11]+1;
    case 2: return tsetshift_[1]+p[0]*2+p[2]*tshift_[5]+1;
    case 3: return tsetshift_[0]+p[0]*2+p[2]*tshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_nnz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+p[2]*tshift_[11]+1;
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 3: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 4: return tsetshift_[4]+p[0]*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
    case 5: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_nNz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 1: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
    case 2: return tsetshift_[4]+p[0]*2+(p[1]-1)*tshift_[10]+p[2]*tshift_[11];
    case 3: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_N0z(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+p[2]*tshift_[3]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[2]*tshift_[11]+1;
    case 2: return tsetshift_[1]+p[0]*2+p[2]*tshift_[5]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_Nnz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 1: return tsetshift_[4]+(p[0]-1)*2+p[1]*tshift_[10]+p[2]*tshift_[11]+1;
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 3: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleP_NNz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+(p[0]-1)*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 1: return tsetshift_[1]+p[0]*2+(p[1]-1)*tshift_[4]+p[2]*tshift_[5];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD1_xy0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+p[1]*tshift_[0];
    case 1: return p[0]*2+p[1]*tshift_[0]+1;
    case 2: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD1_xyn(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 1: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 2: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];
    case 3: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD1_xyN(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 1: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 2: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+(p[2]-1)*tshift_[11]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD2_0yz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 1: return tsetshift_[1]+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 2: return tsetshift_[3]+p[1]*tshift_[8]+p[2]*tshift_[9];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD2_nyz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 1: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 2: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 3: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+p[2]*tshift_[9]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD2_Nyz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 1: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 2: return tsetshift_[3]+(p[0]-1)*2+p[1]*tshift_[8]+p[2]*tshift_[9]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD3_x0z(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+p[0]*2+p[2]*tshift_[3];
    case 1: return tsetshift_[0]+p[0]*2+p[2]*tshift_[3]+1;
    case 2: return tsetshift_[2]+p[0]*2+p[2]*tshift_[7]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD3_xnz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 2: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;
    case 3: return tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD3_xNz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 2: return tsetshift_[2]+p[0]*2+(p[1]-1)*tshift_[6]+p[2]*tshift_[7];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeTriangleD4_xyz(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7];
    case 1: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;
    case 2: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 3: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9]+1;
    case 4: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];
    case 5: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLinkL(const SimplexId p[3],
const int id) const{
  if(p[2]==0 and p[1]==0){
    switch(id){
      case 0: return esetshift_[1]+p[0]+eshift_[4]; //CG
      case 1: return esetshift_[0]+p[0]+eshift_[3]; //EG
    }
  }
  else if(p[2]==0 and p[1]==nbvoxels_[1]) return 
esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]; //BG
  else if(p[2]==nbvoxels_[2] and p[1]==0) return 
esetshift_[5]+p[0]+(p[2]-1)*eshift_[13]; //BG
  else if(p[2]==nbvoxels_[2] and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return 
esetshift_[1]+p[0]+(p[1]-1)*eshift_[4]+(p[2]-1)*eshift_[5]+1; //BF
      case 1: return 
esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+(p[2]-1)*eshift_[3]+1; //BD
    }
  }
  else if(p[2]==0 and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return esetshift_[1]+p[0]+(p[1]+1)*eshift_[4]; //CG
      case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+eshift_[3]; //EG
      case 2: return esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]; //BG
    }
  }
  else if(p[2]==nbvoxels_[2] and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return 
esetshift_[1]+p[0]+(p[1]-1)*eshift_[4]+(p[2]-1)*eshift_[5]+1; //BF
      case 1: return 
esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+(p[2]-1)*eshift_[3]+1; //BD
      case 2: return esetshift_[5]+p[0]+p[1]*eshift_[12]+(p[2]-1)*eshift_[13]; 
//BG
   }
  }
  else if(p[2]>0 and p[2]<nbvoxels_[2] and p[1]==0){
    switch(id){
      case 0: return esetshift_[1]+p[0]+p[2]*eshift_[5]+eshift_[4]; //CG
      case 1: return esetshift_[0]+p[0]+(p[2]+1)*eshift_[3]; //EG
      case 2: return esetshift_[5]+p[0]+(p[2]-1)*eshift_[13]; //BG
    }
  }
  else if(p[2]>0 and p[2]<nbvoxels_[2] and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return 
esetshift_[1]+p[0]+(p[1]-1)*eshift_[4]+(p[2]-1)*eshift_[5]+1; //BF
      case 1: return 
esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+(p[2]-1)*eshift_[3]+1; //BD
      case 2: return esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+p[2]*eshift_[13]; 
//BG
    }
  }
  else{
    switch(id){
      case 0: return esetshift_[1]+p[0]+(p[1]+1)*eshift_[4]+p[2]*eshift_[5]; 
//CG
      case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+(p[2]+1)*eshift_[3]; 
//EG
      case 2: return esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+p[2]*eshift_[13];
      case 3: return 
esetshift_[1]+p[0]+1+(p[1]-1)*eshift_[4]+(p[2]-1)*eshift_[5]; //CG
      case 4: return 
esetshift_[0]+p[0]+1+(p[1]-1)*eshift_[2]+(p[2]-1)*eshift_[3]; //EG
      case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+(p[2]-1)*eshift_[13];
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLinkH(const SimplexId p[3],
const int id) const{
  if(p[0]==0 and p[2]==0) return esetshift_[5]+p[1]*eshift_[12];
  else if(p[0]==nbvoxels_[0] and p[2]==0){
    switch(id){
      case 0: return esetshift_[1]+p[0]+(p[1]+1)*eshift_[4]-1;
      case 1: return p[0]+(p[1]+1)*eshift_[0]+eshift_[1]-1;
    }
  }
  else if(p[0]==0 and p[2]==nbvoxels_[2]){
    switch(id){
      case 0: return p[1]*eshift_[0]+(p[2]-1)*eshift_[1];
      case 1: return esetshift_[1]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5]+1;
    }
  }
  else if(p[0]==nbvoxels_[0] and p[2]==nbvoxels_[2]) return 
esetshift_[5]+p[0]-1+p[1]*eshift_[12]+(p[2]-1)*eshift_[13];
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[2]==0){
    switch(id){
      case 0: return p[0]-1+(p[1]+1)*eshift_[0]+eshift_[1];
      case 1: return esetshift_[1]+p[0]-1+(p[1]+1)*eshift_[4];
      case 2: return esetshift_[5]+p[0]+p[1]*eshift_[12];
    }
  }
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[2]==nbvoxels_[2]){
    switch(id){
      case 0: return esetshift_[5]+p[0]-1+p[1]*eshift_[12]+(p[2]-1)*eshift_[13];
      case 1: return p[0]+p[1]*eshift_[0]+(p[2]-1)*eshift_[1];
      case 2: return esetshift_[1]+p[0]+1+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];
    }
  }
  else if(p[0]==0 and p[2]>0 and p[2]<nbvoxels_[2]){
    switch(id){
      case 0: return esetshift_[1]+p[1]*eshift_[4]+(p[2]-1)*eshift_[5]+1;
      case 1: return esetshift_[5]+p[1]*eshift_[12]+p[2]*eshift_[13];
      case 2: return p[1]*eshift_[0]+(p[2]-1)*eshift_[1];
    }
  }
  else if(p[0]==nbvoxels_[0] and p[2]>0 and p[2]<nbvoxels_[2]){
    switch(id){
      case 0: return esetshift_[5]+p[0]-1+p[1]*eshift_[12]+(p[2]-1)*eshift_[13];
      case 1: return esetshift_[1]+p[0]-1+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];
      case 2: return p[0]-1+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1];
    }
  }
  else{
    switch(id){
      case 0: return p[0]+p[1]*eshift_[0]+(p[2]-1)*eshift_[1];
      case 1: return p[0]+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1]-1;
      case 2: return esetshift_[1]+p[0]-1+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];
      case 3: return esetshift_[1]+p[0]+1+p[1]*eshift_[4]+(p[2]-1)*eshift_[5];
      case 4: return 
esetshift_[5]+(p[0]-1)+p[1]*eshift_[12]+(p[2]-1)*eshift_[13];
      case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLinkP(const SimplexId p[3],
const int id) const{
  if(p[0]==0 and p[1]==0) return 
esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];
  else if(p[0]==0 and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3]+1;
      case 1: return p[0]+(p[1]-1)*eshift_[0]+p[2]*eshift_[1];
    }
  }
  else if(p[0]==nbvoxels_[0] and p[1]==0){
    switch(id){
      case 0: return esetshift_[0]+p[0]+p[1]*eshift_[2]+(p[2]+1)*eshift_[3]-1;
      case 1: return p[0]+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1]-1;
    }
  }
  else if(p[0]==nbvoxels_[0] and p[1]==nbvoxels_[1]) return 
esetshift_[5]+p[0]-1+(p[1]-1)*eshift_[12]+p[2]*eshift_[13];
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[1]==0){
    switch(id){
      case 0: return p[0]+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1]-1;
      case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+(p[2]+1)*eshift_[3]-1;
      case 2: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];
    }
  }
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return p[0]+(p[1]-1)*eshift_[0]+p[2]*eshift_[1];
      case 1: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3]+1;
      case 2: return esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+p[2]*eshift_[13]-1;
    }
  }
  else if(p[0]==0 and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return p[0]+(p[1]-1)*eshift_[0]+p[2]*eshift_[1];
      case 1: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3]+1;
      case 2: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];
    }
  }
  else if(p[0]==nbvoxels_[0] and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+p[2]*eshift_[13]-1;
      case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+(p[2]+1)*eshift_[3]-1;
      case 2: return p[0]+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1]-1;
    }
  }
  else{
    switch(id){
      case 0: return p[0]+(p[1]-1)*eshift_[0]+p[2]*eshift_[1];
      case 1: return p[0]+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1]-1;
      case 2: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];
      case 3: return esetshift_[5]+p[0]+(p[1]-1)*eshift_[12]+p[2]*eshift_[13]-1;
      case 4: return esetshift_[0]+p[0]+p[1]*eshift_[2]+(p[2]+1)*eshift_[3]-1;
      case 5: return esetshift_[0]+p[0]+(p[1]-1)*eshift_[2]+p[2]*eshift_[3]+1;
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLinkD1(const SimplexId p[3],
const int id) const{
  if(p[2]>0 and p[2]<nbvoxels_[2]){
    switch(id){
      case 0: return esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];
      case 1: return esetshift_[4]+p[0]+(p[1]+1)*eshift_[10]+p[2]*eshift_[11];
      case 2: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];
      case 3: return esetshift_[3]+p[0]+p[1]*eshift_[8]+(p[2]-1)*eshift_[9]+1;
    }
  }
  else if(p[2]==0){
    switch(id){
      case 0: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];
      case 1: return esetshift_[4]+p[0]+(p[1]+1)*eshift_[10]+p[2]*eshift_[11];
    }
  }
  else{
    switch(id){
      case 0: return esetshift_[3]+p[0]+p[1]*eshift_[8]+(p[2]-1)*eshift_[9]+1;
      case 1: return esetshift_[4]+p[0]+p[1]*eshift_[10]+(p[2]-1)*eshift_[11];
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLinkD2(const SimplexId p[3],
const int id) const{
  if(p[0]>0 and p[0]<nbvoxels_[0]){
    switch(id){
      case 0: return esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11];
      case 1: return esetshift_[4]+p[0]+(p[1]+1)*eshift_[10]+p[2]*eshift_[11]-1;
      case 2: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7];
      case 3: return esetshift_[2]+p[0]+p[1]*eshift_[6]+(p[2]+1)*eshift_[7]-1;
    }
  }
  else if(p[0]==0){
    switch(id){
      case 0: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7];
      case 1: return esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11];
    }
  }
  else{
    switch(id){
      case 0: return esetshift_[2]+p[0]+p[1]*eshift_[6]+(p[2]+1)*eshift_[7]-1;
      case 1: return esetshift_[4]+p[0]+(p[1]+1)*eshift_[10]+p[2]*eshift_[11]-1;
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLinkD3(const SimplexId p[3],
const int id) const{
  if(p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];
      case 1: return esetshift_[2]+p[0]+p[1]*eshift_[6]+(p[2]+1)*eshift_[7];
      case 2: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];
      case 3: return esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+p[2]*eshift_[9]+1;
    }
  }
  else if(p[1]==0){
    switch(id){
      case 0: return esetshift_[2]+p[0]+p[1]*eshift_[6]+(p[2]+1)*eshift_[7];
      case 1: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];
    }
  }
  else{
    switch(id){
      case 0: return esetshift_[2]+p[0]+(p[1]-1)*eshift_[6]+p[2]*eshift_[7];
      case 1: return esetshift_[3]+p[0]+(p[1]-1)*eshift_[8]+p[2]*eshift_[9]+1;
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeLinkD4(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+(p[1]+1)*eshift_[0]+p[2]*eshift_[1];
    case 1: return p[0]+p[1]*eshift_[0]+(p[2]+1)*eshift_[1];
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];
    case 3: return esetshift_[1]+p[0]+1+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];
    case 4: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];
    case 5: return esetshift_[0]+p[0]+1+p[1]*eshift_[2]+(p[2]+1)*eshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStarL(const SimplexId p[3],
const int id) const{
  if(p[2]==0 and p[1]==0){
    switch(id){
      case 0: return p[0]*6; //ABCG
      case 1: return p[0]*6+2; //ABEG
    }
  }
  else if(p[2]==0 and p[1]==nbvoxels_[1]) return 
(p[1]-1)*tetshift_[0]+p[0]*6+1;//BCDG
  else if(p[2]==nbvoxels_[2] and p[1]==0) return 
(p[2]-1)*tetshift_[1]+p[0]*6+3;//BEFG
  else if(p[2]==nbvoxels_[2] and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return (p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+p[0]*6+4; 
//BFGH
      case 1: return (p[1]-1)*tetshift_[0]+(p[2]-1)*tetshift_[1]+p[0]*6+5; 
//BDGH
    }
  }
  else if(p[2]==0 and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return p[1]*tetshift_[0]+p[0]*6; //ABCG
      case 1: return p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 2: return (p[1]-1)*tetshift_[0]+p[0]*6+1; //BCDG
    }
  }
  else if(p[2]==nbvoxels_[2] and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
      case 1: return (p[2]-1)*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+4; 
//BFGH
      case 2: return (p[2]-1)*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+5; 
//BDGH
    }
  }
  else if(p[2]>0 and p[2]<nbvoxels_[2] and p[1]==0){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[0]*6; //ABCG
      case 1: return p[2]*tetshift_[1]+p[0]*6+2; //ABEG
      case 2: return (p[2]-1)*tetshift_[1]+p[0]*6+3; //BEFG
    }
  }
  else if(p[2]>0 and p[2]<nbvoxels_[2] and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+1; //BCDG
      case 1: return (p[2]-1)*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+4; 
//BFGH
      case 2: return (p[2]-1)*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+5; 
//BDGH
    }
  }
  else{
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6; //ABCG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 2: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+1; //BCDG
      case 3: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
      case 4: return (p[2]-1)*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+4; 
//BFGH
      case 5: return (p[2]-1)*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+5; 
//BDGH
    }
  }

  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStarH(const SimplexId p[3],
const int id) const{
  if(p[0]==0 and p[2]==0) return p[1]*tetshift_[0]; //ABCG
  else if(p[0]==nbvoxels_[0] and p[2]==0){
    switch(id){
      case 0: return p[1]*tetshift_[0]+(p[0]-1)*6+1; //BCDG
      case 1: return p[1]*tetshift_[0]+(p[0]-1)*6+5; //BDGH
    }
  }
  else if(p[0]==0 and p[2]==nbvoxels_[2]){
    switch(id){
      case 0: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+2; //ABEG
      case 1: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+3; //BEFG
    }
  }
  else if(p[0]==nbvoxels_[0] and p[2]==nbvoxels_[2]) return 
(p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4;//BFGH
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[2]==0){
    switch(id){
      case 0: return p[1]*tetshift_[0]+(p[0]-1)*6+1; //BCDG
      case 1: return p[1]*tetshift_[0]+(p[0]-1)*6+5; //BDGH
      case 2: return p[1]*tetshift_[0]+p[0]*6; //ABCG
    }
  }
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[2]==nbvoxels_[2]){
    switch(id){
      case 0: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 1: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
      case 2: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4; 
//BFGH
    }
  }
  else if(p[0]==0 and p[2]>0 and p[2]<nbvoxels_[2]){
    switch(id){
      case 0: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+2; //ABEG
      case 1: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+3; //BEFG
      case 2: return p[2]*tetshift_[1]+p[1]*tetshift_[0]; //ABCG
    }
  }
  else if(p[0]==nbvoxels_[0] and p[2]>0 and p[2]<nbvoxels_[2]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+1; //BCDG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+5; //BDGH
      case 2: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4; 
//BFGH
    }
  }
  else{
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6; //ABCG
      case 1: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 2: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
      case 3: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4; 
//BFGH
      case 4: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+1; //BCDG
      case 5: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+5; //BDGH
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStarP(const SimplexId p[3],
const int id) const{
  if(p[0]==0 and p[1]==0) return p[2]*tetshift_[1]+2;//ABEG
  else if(p[0]==0 and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]; //ABCG
      case 1: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+1; //BCDG
    }
  }
  else if(p[0]==nbvoxels_[0] and p[1]==0){
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[0]-1)*6+3; //BEFG
      case 1: return p[2]*tetshift_[1]+(p[0]-1)*6+4; //BFGH
    }
  }
  else if(p[0]==nbvoxels_[0] and p[1]==nbvoxels_[1]) return 
p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+(p[0]-1)*6+5;//BDGH
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[1]==0){
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[0]-1)*6+3; //BEFG
      case 1: return p[2]*tetshift_[1]+(p[0]-1)*6+4; //BFGH
      case 2: return p[2]*tetshift_[1]+p[0]*6+2; //ABEG
    }
  }
  else if(p[0]>0 and p[0]<nbvoxels_[0] and p[1]==nbvoxels_[1]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6; //ABCG
      case 1: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+1; //BCDG
      case 2: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+(p[0]-1)*6+5; 
//BDGH
    }
  }
  else if(p[0]==0 and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]; //ABCG
      case 1: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+1; //BCDG
      case 2: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+2; //ABEG
    }
  }
  else if(p[0]==nbvoxels_[0] and p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+3; //BEFG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4; //BFGH
      case 2: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+(p[0]-1)*6+5; 
//BDGH
    }
  }
  else{
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+(p[0]-1)*6+5; 
//BDGH
      case 1: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6; //ABCG
      case 2: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+1; //BCDG
      case 3: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 4: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+3; //BEFG
      case 5: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4; //BFGH
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStarD1(const SimplexId p[3],
const int id) const{
  if(p[2]>0 and p[2]<nbvoxels_[2]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6; //ABCG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+1; //BCDG
      case 2: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
      case 3: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+4; //BFGH
    }
  }
  else if(p[2]==0){
    switch(id){
      case 0: return p[1]*tetshift_[0]+p[0]*6; //ABCG
      case 1: return p[1]*tetshift_[0]+p[0]*6+1; //BCDG
    }
  }
  else{
    switch(id){
      case 0: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
      case 1: return (p[2]-1)*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+4; //BFGH
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStarD2(const SimplexId p[3],
const int id) const{
  if(p[0]>0 and p[0]<nbvoxels_[0]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6; //ABCG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 2: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+5; //BDGH
      case 3: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4; //BFGH
    }
  }
  else if(p[0]==0){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]; //ABCG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+2; //ABEG
    }
  }
  else{
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+5; //BDGH
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+(p[0]-1)*6+4; //BFGH
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getEdgeStarD3(const SimplexId p[3],
const int id) const{
  if(p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
      case 2: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+1; //BCDG
      case 3: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+5; //BDGH
    }
  }
  else if(p[1]==0){
    switch(id){
      case 0: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+2; //ABEG
      case 1: return p[2]*tetshift_[1]+p[1]*tetshift_[0]+p[0]*6+3; //BEFG
    }
  }
  else{
    switch(id){
      case 0: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+1; //BCDG
      case 1: return p[2]*tetshift_[1]+(p[1]-1)*tetshift_[0]+p[0]*6+5; //BDGH
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleVertexF(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0];
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+1;
  }
  else{
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1];
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleVertexH(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+1;
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1];
  }
  else{
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1];
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleVertexC(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(id==0) return (p[0]/2)+p[1]*vshift_[0]+p[2]*vshift_[1];
    else if(id==1) return (p[0]/2)+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1];
    else return (p[0]/2)+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+vshift_[0];
  }
  else{
    if(id==0) return (p[0]/2)+p[1]*vshift_[0]+p[2]*vshift_[1];
    else if(id==1) return (p[0]/2)+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0];
    else return (p[0]/2)+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+vshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleVertexD1(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1];
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+vshift_[0];
  }
  else{
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+1;
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+vshift_[0];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleVertexD2(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else if(id==1) return 
p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1]+1;
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];
  }
  else{
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1];
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleVertexD3(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+1;
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];
  }
  else{
    if(id==0) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
    else if(id==1) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0];
    else return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeF_0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]/2+p[1]*eshift_[0]+p[2]*eshift_[1];
    case 1: return esetshift_[0]+p[0]/2+p[1]*eshift_[2]+p[2]*eshift_[3];
    case 2: return esetshift_[2]+p[0]/2+p[1]*eshift_[6]+p[2]*eshift_[7];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeF_1(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]/2+(p[1]+1)*eshift_[0]+p[2]*eshift_[1];
    case 1: return esetshift_[0]+p[0]/2+p[1]*eshift_[2]+p[2]*eshift_[3]+1;
    case 2: return esetshift_[2]+p[0]/2+p[1]*eshift_[6]+p[2]*eshift_[7];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeH_0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]/2+p[1]*eshift_[0]+p[2]*eshift_[1];
    case 1: return esetshift_[1]+p[0]/2+p[1]*eshift_[4]+p[2]*eshift_[5];
    case 2: return esetshift_[4]+p[0]/2+p[1]*eshift_[10]+p[2]*eshift_[11];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeH_1(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]/2+p[1]*eshift_[0]+(p[2]+1)*eshift_[1];
    case 1: return esetshift_[1]+p[0]/2+p[1]*eshift_[4]+p[2]*eshift_[5]+1;
    case 2: return esetshift_[4]+p[0]/2+p[1]*eshift_[10]+p[2]*eshift_[11];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeC_0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]/2+p[1]*eshift_[2]+p[2]*eshift_[3];
    case 1: return esetshift_[1]+p[0]/2+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];
    case 2: return esetshift_[3]+p[0]/2+p[1]*eshift_[8]+p[2]*eshift_[9];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeC_1(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]/2+p[1]*eshift_[2]+(p[2]+1)*eshift_[3];
    case 1: return esetshift_[1]+p[0]/2+p[1]*eshift_[4]+p[2]*eshift_[5];
    case 2: return esetshift_[3]+p[0]/2+p[1]*eshift_[8]+p[2]*eshift_[9];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeD1_0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]/2+p[1]*eshift_[2]+p[2]*eshift_[3]+1;
    case 1: return esetshift_[4]+p[0]/2+(p[1]+1)*eshift_[10]+p[2]*eshift_[11];
    case 2: return esetshift_[5]+p[0]/2+p[1]*eshift_[12]+p[2]*eshift_[13];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeD1_1(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return esetshift_[0]+p[0]/2+p[1]*eshift_[2]+(p[2]+1)*eshift_[3];
    case 1: return esetshift_[4]+p[0]/2+p[1]*eshift_[10]+p[2]*eshift_[11];
    case 2: return esetshift_[5]+p[0]/2+p[1]*eshift_[12]+p[2]*eshift_[13];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeD2_0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]/2+p[1]*eshift_[0]+p[2]*eshift_[1];
    case 1: return esetshift_[3]+p[0]/2+p[1]*eshift_[8]+p[2]*eshift_[9];
    case 2: return esetshift_[5]+p[0]/2+p[1]*eshift_[12]+p[2]*eshift_[13];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeD2_1(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]/2+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1];
    case 1: return esetshift_[3]+p[0]/2+p[1]*eshift_[8]+p[2]*eshift_[9]+1;
    case 2: return esetshift_[5]+p[0]/2+p[1]*eshift_[12]+p[2]*eshift_[13];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeD3_0(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return esetshift_[1]+p[0]/2+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];
    case 1: return esetshift_[2]+p[0]/2+p[1]*eshift_[6]+p[2]*eshift_[7];
    case 2: return esetshift_[5]+p[0]/2+p[1]*eshift_[12]+p[2]*eshift_[13];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleEdgeD3_1(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return esetshift_[1]+p[0]/2+p[1]*eshift_[4]+p[2]*eshift_[5]+1;
    case 1: return esetshift_[2]+p[0]/2+p[1]*eshift_[6]+(p[2]+1)*eshift_[7];
    case 2: return esetshift_[5]+p[0]/2+p[1]*eshift_[12]+p[2]*eshift_[13];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleLinkF(const SimplexId p[3],
const int id) const{
  if(p[2]>0 and p[2]<nbvoxels_[2]){
    switch(id){
      case 0: return p[0]/2+(p[1]+1)*vshift_[0]+(p[2]+1)*vshift_[1];
      case 1: return p[0]/2+p[1]*vshift_[0]+(p[2]-1)*vshift_[1]+1;
    }
  }
  else if(p[2]==0) return p[0]/2+(p[1]+1)*vshift_[0]+vshift_[1];
  else return p[0]/2+p[1]*vshift_[0]+(p[2]-1)*vshift_[1]+1;

  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleLinkH(const SimplexId p[3],
const int id) const{
  if(p[1]>0 and p[1]<nbvoxels_[1]){
    switch(id){
      case 0: return p[0]/2+(p[1]+1)*vshift_[0]+(p[2]+1)*vshift_[1];
      case 1: return p[0]/2+(p[1]-1)*vshift_[0]+p[2]*vshift_[1]+1;
    }
  }
  else if(p[1]==0) return p[0]/2+(p[1]+1)*vshift_[0]+(p[2]+1)*vshift_[1];
  else return p[0]/2+(p[1]-1)*vshift_[0]+p[2]*vshift_[1]+1;

  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleLinkC(const SimplexId p[3],
const int id) const{
  if(p[0]>1 and p[0]<(dimensions_[0]*2-2)){
    switch(id){
      case 0: return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
      case 1: return p[0]/2+(p[1]+1)*vshift_[0]+(p[2]+1)*vshift_[1]-1;
    }
  }
  else if(p[0]<2) return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1]+1;
  else return p[0]/2+(p[1]+1)*vshift_[0]+(p[2]+1)*vshift_[1]-1;

  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleLinkD1(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    switch(id){
      case 0: return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1];
      case 1: return p[0]/2+p[1]*vshift_[0]+(p[2]+1)*vshift_[1]+1;
    }
  }
  else{
    switch(id){
      case 0: return p[0]/2+(p[1]+1)*vshift_[0]+p[2]*vshift_[1];
      case 1: return p[0]/2+(p[1]+1)*vshift_[0]+(p[2]+1)*vshift_[1]+1;
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleLinkD2(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    switch(id){
      case 0: return p[0]/2+(p[1]+1)*vshift_[0]+p[2]*vshift_[1]+1;
      case 1: return p[0]/2+p[1]*vshift_[0]+(p[2]+1)*vshift_[1]+1;
    }
  }
  else{
    switch(id){
      case 0: return p[0]/2+(p[1]+1)*vshift_[0]+p[2]*vshift_[1];
      case 1: return p[0]/2+p[1]*vshift_[0]+(p[2]+1)*vshift_[1];
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleLinkD3(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    switch(id){
      case 0: return p[0]/2+p[1]*vshift_[0]+(p[2]+1)*vshift_[1];
      case 1: return p[0]/2+(p[1]+1)*vshift_[0]+(p[2]+1)*vshift_[1]+1;
    }
  }
  else{
    switch(id){
      case 0: return p[0]/2+p[1]*vshift_[0]+p[2]*vshift_[1];
      case 1: return p[0]/2+(p[1]+1)*vshift_[0]+p[2]*vshift_[1]+1;
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleStarF(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(p[2]>0 and p[2]<nbvoxels_[2]){
      switch(id){
        case 0: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+1;//BCDG
        case 1: return 
(p[0]-1)*3+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//BFGH
      }
    }
    else if(p[2]==0) return 
(p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+1;//BCDG
    else return (p[0]-1)*3+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+4;//BFGH
  }
  else{
    if(p[2]>0 and p[2]<nbvoxels_[2]){
      switch(id){
        case 0: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1];//ABCG
        case 1: return p[0]*3+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//BEFG
      }
    }
    else if(p[2]==0) return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1];//ABCG
    else return p[0]*3+p[1]*tetshift_[0]+(p[2]-1)*tetshift_[1]+3;//BEFG
  }

  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleStarH(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(p[1]>0 and p[1]<nbvoxels_[1]){
      switch(id){
        case 0: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+3;//BEFG
        case 1: return 
(p[0]-1)*3+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//BDGH
      }
    }
    else if(p[1]==0) return 
(p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+3;//BEFG
    else return (p[0]-1)*3+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+5;//BDGH
  }
  else{
    if(p[1]>0 and p[1]<nbvoxels_[1]){
      switch(id){
        case 0: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//ABEG
        case 1: return p[0]*3+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//BCDG
      }
    }
    else if(p[1]==0) return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//ABEG
    else return p[0]*3+(p[1]-1)*tetshift_[0]+p[2]*tetshift_[1]+1;//BCDG
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleStarC(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    if(p[0]>1 and p[0]<(dimensions_[0]*2-2)){
      switch(id){
        case 0: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//ABEG
        case 1: return 
((p[0]-2)/2)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+4;//BFGH
      }
    }
    else if(p[0]<2) return 
(p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//ABEG
    else return ((p[0]-2)/2)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+4;//BFGH
  }
  else{
    if(p[0]>1 and p[0]<(dimensions_[0]*2-2)){
      switch(id){
        case 0: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1];//ABCG
        case 1: return 
((p[0]-1)/2)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+5;//BDGH
      }
    }
    else if(p[0]<2) return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1];//ABCG
    else return ((p[0]-1)/2)*6+p[1]*tetshift_[0]+p[2]*tetshift_[1]+5;//BDGH
  }

  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleStarD1(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    switch(id){
      case 0: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//ABEG
      case 1: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+3;//BEFG
    }
  }
  else{
    switch(id){
      case 0: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+1;//BCDG
      case 1: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+5;//BDGH
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleStarD2(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    switch(id){
      case 0: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+5;//BDGH
      case 1: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+4;//BFGH
    }
  }
  else{
    switch(id){
      case 0: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1];//ABCG
      case 1: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+2;//ABEG
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTriangleStarD3(const SimplexId p[3],
const int id) const{
  if(p[0]%2){
    switch(id){
      case 0: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+3;//BEFG
      case 1: return (p[0]-1)*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+4;//BFGH
    }
  }
  else{
    switch(id){
      case 0: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1];//ABCG
      case 1: return p[0]*3+p[1]*tetshift_[0]+p[2]*tetshift_[1]+1;//BCDG
    }
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronVertexABCG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1];//a
    case 1: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+1;//b
    case 2: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0];//c
    case 3: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronVertexBCDG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+1;//b
    case 1: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0];//c
    case 2: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+1;//d
    case 3: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronVertexABEG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1];//a
    case 1: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+1;//b
    case 2: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1];//e
    case 3: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronVertexBEFG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+1;//b
    case 1: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1];//e
    case 2: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+1;//f
    case 3: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];//g
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronVertexBFGH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+1;//b
    case 1: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[1]+1;//f
    case 2: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];//g
    case 3: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1]+1;//h
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronVertexBDGH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+1;//b
    case 1: return p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+1;//d
    case 2: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1];//g
    case 3: return 
p[0]+p[1]*vshift_[0]+p[2]*vshift_[1]+vshift_[0]+vshift_[1]+1;//h
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronEdgeABCG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ab-L
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+p[2]*eshift_[3];//ac-H
    case 2: return esetshift_[1]+p[0]+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7];//bc-D1
    case 4: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
    case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];//bg-D4
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronEdgeBCDG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+(p[1]+1)*eshift_[0]+p[2]*eshift_[1];//ab-L
    case 1: return esetshift_[0]+(p[0]+1)+p[1]*eshift_[2]+p[2]*eshift_[3];//ac-H
    case 2: return esetshift_[1]+p[0]+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return esetshift_[2]+p[0]+p[1]*eshift_[6]+p[2]*eshift_[7];//bc-D1
    case 4: return 
esetshift_[4]+p[0]+(p[1]+1)*eshift_[10]+p[2]*eshift_[11];//be-D3
    case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];//bg-D4
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronEdgeABEG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+p[2]*eshift_[1];//ab-L
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+(p[2]+1)*eshift_[3];//ac-H
    case 2: return esetshift_[1]+p[0]+p[1]*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return esetshift_[3]+p[0]+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
    case 4: return esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11];//be-D3
    case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];//bg-D4
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronEdgeBEFG(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+p[1]*eshift_[0]+(p[2]+1)*eshift_[1];//ab-L
    case 1: return esetshift_[0]+p[0]+p[1]*eshift_[2]+(p[2]+1)*eshift_[3];//ac-H
    case 2: return esetshift_[1]+(p[0]+1)+p[1]*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return 
esetshift_[2]+p[0]+p[1]*eshift_[6]+(p[2]+1)*eshift_[7];//bc-D1
    case 4: return esetshift_[4]+p[0]+p[1]*eshift_[10]+p[2]*eshift_[11];//be-D3
    case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];//bg-D4
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronEdgeBFGH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1];//ab-L
    case 1: return 
esetshift_[0]+(p[0]+1)+p[1]*eshift_[2]+(p[2]+1)*eshift_[3];//ac-H
    case 2: return esetshift_[1]+(p[0]+1)+p[1]*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return 
esetshift_[2]+p[0]+p[1]*eshift_[6]+(p[2]+1)*eshift_[7];//bc-D1
    case 4: return 
esetshift_[3]+(p[0]+1)+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
    case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];//bg-D4
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronEdgeBDGH(const SimplexId p[3],
const int id) const{
  switch(id){
    case 0: return p[0]+(p[1]+1)*eshift_[0]+(p[2]+1)*eshift_[1];//ab-L
    case 1: return esetshift_[0]+(p[0]+1)+p[1]*eshift_[2]+p[2]*eshift_[3];//ac-H
    case 2: return 
esetshift_[1]+(p[0]+1)+(p[1]+1)*eshift_[4]+p[2]*eshift_[5];//ae-P
    case 3: return 
esetshift_[3]+(p[0]+1)+p[1]*eshift_[8]+p[2]*eshift_[9];//ag-D2
    case 4: return 
esetshift_[4]+p[0]+(p[1]+1)*eshift_[10]+p[2]*eshift_[11];//be-D3
    case 5: return esetshift_[5]+p[0]+p[1]*eshift_[12]+p[2]*eshift_[13];//bg-D4
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronTriangleABCG(
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1];
    case 1: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5];
    case 2: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 3: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronTriangleBCDG(
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return p[0]*2+p[1]*tshift_[0]+p[2]*tshift_[1]+1;
    case 1: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11];
    case 2: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7];
    case 3: return tsetshift_[0]+p[0]*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3];
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronTriangleABEG(
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3];
    case 1: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9];
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+1;
    case 3: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronTriangleBEFG(
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7]+1;
    case 1: return tsetshift_[0]+p[0]*2+p[1]*tshift_[2]+p[2]*tshift_[3]+1;
    case 2: return p[0]*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1];
    case 3: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronTriangleBFGH(
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9]+1;
    case 1: return tsetshift_[4]+p[0]*2+p[1]*tshift_[10]+p[2]*tshift_[11]+1;
    case 2: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+3;
    case 3: return p[0]*2+p[1]*tshift_[0]+(p[2]+1)*tshift_[1]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronTriangleBDGH(
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return tsetshift_[1]+p[0]*2+p[1]*tshift_[4]+p[2]*tshift_[5]+2;
    case 1: return tsetshift_[2]+p[0]*2+p[1]*tshift_[6]+p[2]*tshift_[7];
    case 2: return tsetshift_[3]+p[0]*2+p[1]*tshift_[8]+p[2]*tshift_[9]+1;
    case 3: return tsetshift_[0]+p[0]*2+(p[1]+1)*tshift_[2]+p[2]*tshift_[3]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronNeighborABCG(const SimplexId t,
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return t+1;
    case 1: return t+2;
    case 2:
            if(p[0]>0) return t-1;
            else return t-tetshift_[1]+3;
    case 3: return t-tetshift_[1]+3;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronNeighborBCDG(const SimplexId t,
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return t-1;
    case 1: return t+4;
    case 2:
            if(p[2]>0) return t-tetshift_[1]+3;
            else return t+tetshift_[0]+1;
    case 3: return t+tetshift_[0]+1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronNeighborABEG(const SimplexId t,
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return t-2;
    case 1: return t+1;
    case 2:
            if(p[0]>0) return t-4;
            else return t-tetshift_[0]-1;
    case 3: return t-tetshift_[0]-1;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronNeighborBEFG(const SimplexId t,
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return t-1;
    case 1: return t+1;
    case 2:
            if(p[1]>0) return t-tetshift_[0]+2;
            else return t+tetshift_[1]-3;
    case 3: return t+tetshift_[1]-3;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronNeighborBFGH(const SimplexId t,
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return t-1;
    case 1: return t+1;
    case 2:
            if(p[0]<nbvoxels_[0]-1) return t+4;
            else return t+tetshift_[1]-3;
    case 3: return t+tetshift_[1]-3;
  }
  return -1;
}

inline int ttk::ImplicitTriangulation::getTetrahedronNeighborBDGH(const SimplexId t,
const SimplexId p[3], const int id) const{
  switch(id){
    case 0: return t-1;
    case 1: return t-4;
    case 2:
            if(p[0]<nbvoxels_[0]-1) return t+1;
            else return t+tetshift_[0]-2;
    case 3: return t+tetshift_[0]-2;
  }
  return -1;
}

#endif // _IMPLICITTRIANGULATION_H
