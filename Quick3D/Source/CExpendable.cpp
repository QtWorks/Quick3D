
// Application
#include "CExpendable.h"

//-------------------------------------------------------------------------------------------------

CExpendable::CExpendable(int iSecondsToExpendability)
    : m_iSecondsToExpendability(iSecondsToExpendability)
{
    setUsedNow();
}

//-------------------------------------------------------------------------------------------------

CExpendable::~CExpendable()
{
}

//-------------------------------------------------------------------------------------------------

void CExpendable::setSecondsToExpendability(int iSeconds)
{
    m_iSecondsToExpendability = iSeconds;
}

//-------------------------------------------------------------------------------------------------

void CExpendable::setUsedNow()
{
    m_tLastUsed = QDateTime::currentDateTime();
}

//-------------------------------------------------------------------------------------------------

bool CExpendable::isExpendable() const
{
    if (isReallyExpendable())
    {
        return m_tLastUsed.secsTo(QDateTime::currentDateTime()) > m_iSecondsToExpendability;
    }

    return false;
}

//-------------------------------------------------------------------------------------------------

bool CExpendable::isReallyExpendable() const
{
    return true;
}
