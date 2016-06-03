
#pragma once

#include "quick3d_global.h"

// Qt
#include <QString>
#include <QVector>

// Fondations
#include "CVector3.h"
#include "CGeoloc.h"

class CTrajectorable;

class QUICK3D_EXPORT CTrajectory
{

public:

    //-------------------------------------------------------------------------------------------------
    // Constructeurs et destructeur
    //-------------------------------------------------------------------------------------------------

    //!
    CTrajectory(bool bAutoOrientation = true);

    //!
    virtual ~CTrajectory();

    //-------------------------------------------------------------------------------------------------
    // Setters
    //-------------------------------------------------------------------------------------------------

    //!
    void setOriginPosition(CGeoloc Position);

    //!
    void setOriginRotation(Math::CVector3 Rotation);

    //-------------------------------------------------------------------------------------------------
    // Getters
    //-------------------------------------------------------------------------------------------------

    //!
    CGeoloc getOriginPosition();

    //!
    Math::CVector3 getOriginRotation();

    //-------------------------------------------------------------------------------------------------
    // M�thodes de contr�le
    //-------------------------------------------------------------------------------------------------

    //!
    void reset();

    //!
    void addPoint(CGeoloc vPoint);

    //!
    void processObject(CTrajectorable* pVehicle, double dDeltaTime);

    //-------------------------------------------------------------------------------------------------
    // Propri�t�s
    //-------------------------------------------------------------------------------------------------

protected:

    CGeoloc             m_gOriginPosition;
    Math::CVector3      m_vOriginRotation;
    QVector<CGeoloc>    m_vPoints;
    int                 m_iCurrentPoint;
    bool                m_bAutoOrientation;
};
