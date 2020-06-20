/* 
 *  Samples
 *
 *  Samples is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by schema2code on �� 3 7 16:27:55 2019.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __SAMPLES_H__
#define __SAMPLES_H__

#include <QObject>
#include <QString>
#include <QDateTime>
#include "Sample.h"

class XmlStreamReader;

namespace HT {

//-----------------------------------------------------------
//! \brief       Class definition of Samples
//!
//! Comment describing your root element
//!
class Samples : public QObject { 
    Q_OBJECT

public:
    //! constructor
    //!
    Samples();
    //! constructor for parser function
    //!
    Samples(XmlStreamReader&, QString CloseTag ="Samples");
    //! copy constructor
    //!
    Samples(const Samples&);
    //! = operator
    //!
    Samples & operator=(const Samples& val);
    //! == operator
    //!
    bool operator==(const Samples& val);
    //! removes a Sample.
    //!
    bool removeSample(const Sample& val);

    //! adds a Sample.
    //!
    bool addSample(const Sample& val);

    //! gets the i-th Sample.
    //!
    const Sample& getSampleAt(int i) const;

    //!              return the number of Sample objects.
    //!
    //! \return     int
    int countOfSamples() const;

    //! generates XML of this object including attributes and child elements
    //! returns QString::null if not all required elements are available
    //! If null returned check lastError() for problem description
    //!
    //! \return     QString
    const QString& toXML(bool outputNamespace = true, QString xmlTag="Samples", bool bWriteTag=true);

    //! generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString() const;

    //! generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead, QString xmlTag="Samples") const;

    //! return last error found in toXML function
    //!
    //! \return     QString
    const QString& lastError() const;

    //! return changed 
    //!
    //! \return     bool
    const bool& changed() const;

    //! return store 
    //!
    //! \return     QString
    const QString& store() const;


private:
    QList<Sample> m_samples;

public:

private:
    QString m_lastError; 
    bool m_changed; 
    QString m_store;

public:
    void change(bool bChange) { m_changed =  bChange;}

}; 
} //end ns

#endif