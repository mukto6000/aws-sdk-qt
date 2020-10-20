/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "domainmetadataresponse.h"
#include "domainmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::DomainMetadataResponse
 * \brief The DomainMetadataResponse class provides an interace for SimpleDB DomainMetadata responses.
 *
 * \inmodule QtAwsSimpleDB
 *
 *  Amazon SimpleDB is a web service providing the core database functions of data indexing and querying in the cloud. By
 *  offloading the time and effort associated with building and operating a web-scale database, SimpleDB provides developers
 *  the freedom to focus on application development.
 * 
 *  A traditional, clustered relational database requires a sizable upfront capital outlay, is complex to design, and often
 *  requires extensive and repetitive database administration. Amazon SimpleDB is dramatically simpler, requiring no schema,
 *  automatically indexing your data and providing a simple API for storage and access. This approach eliminates the
 *  administrative burden of data modeling, index maintenance, and performance tuning. Developers gain access to this
 *  functionality within Amazon's proven computing environment, are able to scale instantly, and pay only for what they use.
 * 
 *  </p
 * 
 *  Visit <a href="http://aws.amazon.com/simpledb/">http://aws.amazon.com/simpledb/</a> for more information.
 *
 * \sa SimpleDBClient::domainMetadata
 */

/*!
 * Constructs a DomainMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
DomainMetadataResponse::DomainMetadataResponse(
        const DomainMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new DomainMetadataResponsePrivate(this), parent)
{
    setRequest(new DomainMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DomainMetadataRequest * DomainMetadataResponse::request() const
{
    Q_D(const DomainMetadataResponse);
    return static_cast<const DomainMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SimpleDB DomainMetadata \a response.
 */
void DomainMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DomainMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SimpleDB::DomainMetadataResponsePrivate
 * \brief The DomainMetadataResponsePrivate class provides private implementation for DomainMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a DomainMetadataResponsePrivate object with public implementation \a q.
 */
DomainMetadataResponsePrivate::DomainMetadataResponsePrivate(
    DomainMetadataResponse * const q) : SimpleDBResponsePrivate(q)
{

}

/*!
 * Parses a SimpleDB DomainMetadata response element from \a xml.
 */
void DomainMetadataResponsePrivate::parseDomainMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DomainMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SimpleDB
} // namespace QtAws
