/* 
 *  Schema
 *
 *  Schema is free software: you can redistribute it and/or modify
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

#ifndef __SCHEMA_H__
#define __SCHEMA_H__

#include <QObject>
#include <QString>
#include <QDateTime>

class XmlStreamReader;

namespace HT {

//-----------------------------------------------------------
//! \brief       Class definition of Schema
//!
//! 
//!
class Schema : public QObject { 
    Q_OBJECT

public:
    //! constructor
    //!
    Schema();
    //! constructor for parser function
    //!
    Schema(XmlStreamReader&, QString CloseTag ="Schema");
    //! copy constructor
    //!
    Schema(const Schema&);
    //! = operator
    //!
    Schema & operator=(const Schema& val);
    //! == operator
    //!
    bool operator==(const Schema& val);
    //! gets the AttributeFormDefault
    //!
    //! \return     QString
    //!
    QString getAttributeFormDefault() const;
    //! gets the ElementFormDefault
    //!
    //! \return     QString
    //!
    QString getElementFormDefault() const;
    //! generates XML of this object including attributes and child elements
    //! returns QString::null if not all required elements are available
    //! If null returned check lastError() for problem description
    //!
    //! \return     QString
    const QString& toXML(bool outputNamespace = true, QString xmlTag="Schema", bool bWriteTag=true);

    //! generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString() const;

    //! generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead, QString xmlTag="Schema") const;

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