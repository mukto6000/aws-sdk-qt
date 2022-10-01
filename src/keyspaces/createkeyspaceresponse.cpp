/*
    Copyright 2013-2021 Paul Colby

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

#include "createkeyspaceresponse.h"
#include "createkeyspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::CreateKeyspaceResponse
 * \brief The CreateKeyspaceResponse class provides an interace for Keyspaces CreateKeyspace responses.
 *
 * \inmodule QtAwsKeyspaces
 *
 *  Amazon Keyspaces (for Apache Cassandra) is a scalable, highly available, and managed Apache Cassandra-compatible
 *  database service. Amazon Keyspaces makes it easy to migrate, run, and scale Cassandra workloads in the Amazon Web
 *  Services Cloud. With just a few clicks on the Amazon Web Services Management Console or a few lines of code, you can
 *  create keyspaces and tables in Amazon Keyspaces, without deploying any infrastructure or installing software.
 * 
 *  </p
 * 
 *  In addition to supporting Cassandra Query Language (CQL) requests via open-source Cassandra drivers, Amazon Keyspaces
 *  supports data definition language (DDL) operations to manage keyspaces and tables using the Amazon Web Services SDK and
 *  CLI. This API reference describes the supported DDL operations in
 * 
 *  detail>
 * 
 *  For the list of all supported CQL APIs, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cassandra-apis.html">Supported Cassandra APIs, operations,
 *  and data types in Amazon Keyspaces</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  To learn how Amazon Keyspaces API actions are recorded with CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/logging-using-cloudtrail.html#service-name-info-in-cloudtrail">Amazon
 *  Keyspaces information in CloudTrail</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  For more information about Amazon Web Services APIs, for example how to implement retry logic or how to sign Amazon Web
 *  Services API requests, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web Services
 *  APIs</a> in the <i>General
 *
 * \sa KeyspacesClient::createKeyspace
 */

/*!
 * Constructs a CreateKeyspaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateKeyspaceResponse::CreateKeyspaceResponse(
        const CreateKeyspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KeyspacesResponse(new CreateKeyspaceResponsePrivate(this), parent)
{
    setRequest(new CreateKeyspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateKeyspaceRequest * CreateKeyspaceResponse::request() const
{
    Q_D(const CreateKeyspaceResponse);
    return static_cast<const CreateKeyspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Keyspaces CreateKeyspace \a response.
 */
void CreateKeyspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateKeyspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Keyspaces::CreateKeyspaceResponsePrivate
 * \brief The CreateKeyspaceResponsePrivate class provides private implementation for CreateKeyspaceResponse.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a CreateKeyspaceResponsePrivate object with public implementation \a q.
 */
CreateKeyspaceResponsePrivate::CreateKeyspaceResponsePrivate(
    CreateKeyspaceResponse * const q) : KeyspacesResponsePrivate(q)
{

}

/*!
 * Parses a Keyspaces CreateKeyspace response element from \a xml.
 */
void CreateKeyspaceResponsePrivate::parseCreateKeyspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeyspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Keyspaces
} // namespace QtAws
