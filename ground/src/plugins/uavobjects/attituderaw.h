/**
 ******************************************************************************
 *
 * @file       attituderaw.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: attituderaw.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @brief      The UAVUObjects GCS plugin 
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef ATTITUDERAW_H
#define ATTITUDERAW_H

#include "uavdataobject.h"
#include "uavobjectmanager.h"

class UAVOBJECTS_EXPORT AttitudeRaw: public UAVDataObject
{
    Q_OBJECT

public:
    // Field structure
    typedef struct {
        qint16 magnetometers[3];
        quint16 gyros[3];
        quint16 gyrotemp[2];
        quint16 accelerometers[3];

    } __attribute__((packed)) DataFields;

    // Field information
    // Field magnetometers information
    /* Array element names for field magnetometers */
    typedef enum { MAGNETOMETERS_X=0, MAGNETOMETERS_Y=1, MAGNETOMETERS_Z=2 } magnetometersElem;
    /* Number of elements for field magnetometers */
    static const quint32 MAGNETOMETERS_NUMELEM = 3;
    // Field gyros information
    /* Array element names for field gyros */
    typedef enum { GYROS_X=0, GYROS_Y=1, GYROS_Z=2 } gyrosElem;
    /* Number of elements for field gyros */
    static const quint32 GYROS_NUMELEM = 3;
    // Field gyrotemp information
    /* Array element names for field gyrotemp */
    typedef enum { GYROTEMP_XY=0, GYROTEMP_Z=1 } gyrotempElem;
    /* Number of elements for field gyrotemp */
    static const quint32 GYROTEMP_NUMELEM = 2;
    // Field accelerometers information
    /* Array element names for field accelerometers */
    typedef enum { ACCELEROMETERS_X=0, ACCELEROMETERS_Y=1, ACCELEROMETERS_Z=2 } accelerometersElem;
    /* Number of elements for field accelerometers */
    static const quint32 ACCELEROMETERS_NUMELEM = 3;

  
    // Constants
    static const quint32 OBJID = 4179445416U;
    static const QString NAME;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AttitudeRaw();

    DataFields getData();
    void setData(const DataFields& data);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);

    static AttitudeRaw* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);
	
private:
    DataFields data;

    void setDefaultFieldValues();

};

#endif // ATTITUDERAW_H