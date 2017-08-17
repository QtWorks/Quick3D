
#ifndef CQ3DLOADER_H
#define CQ3DLOADER_H

#include "quick3d_global.h"

// Application
#include "CSingleton.h"
#include "CMesh.h"
#include "CXMLNode.h"

class QUICK3D_EXPORT CQ3DLoader : public CSingleton<CQ3DLoader>
{
    friend class CSingleton<CQ3DLoader>;

public:

    //!
    QSP<CMeshGeometry> load(const QString& sBaseFile, CComponent* pContainer, QString sText);

    //!
    void loadComponent(const QString& sBaseFile, CComponent* pContainer, QSP<CMeshGeometry> pMesh, CXMLNode xNode, QVector<QSP<CMaterial> > &vMaterials, CComponent* pParent = nullptr);

    //!
    void addBounds(CComponent* pContainer, CBoundingBox& bBox, Math::CMatrix4 mTransform);

protected:

    CQ3DLoader();
};

#endif // CQ3DLOADER_H
