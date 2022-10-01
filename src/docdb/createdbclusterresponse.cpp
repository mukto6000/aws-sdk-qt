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

#include "createdbclusterresponse.h"
#include "createdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterResponse
 * \brief The CreateDBClusterResponse class provides an interace for DocDb CreateDBCluster responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBCluster
 */

/*!
 * Constructs a CreateDBClusterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDBClusterResponse::CreateDBClusterResponse(
        const CreateDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CreateDBClusterResponsePrivate(this), parent)
{
    setRequest(new CreateDBClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDBClusterRequest * CreateDBClusterResponse::request() const
{
    Q_D(const CreateDBClusterResponse);
    return static_cast<const CreateDBClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CreateDBCluster \a response.
 */
void CreateDBClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CreateDBClusterResponsePrivate
 * \brief The CreateDBClusterResponsePrivate class provides private implementation for CreateDBClusterResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterResponsePrivate object with public implementation \a q.
 */
CreateDBClusterResponsePrivate::CreateDBClusterResponsePrivate(
    CreateDBClusterResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CreateDBCluster response element from \a xml.
 */
void CreateDBClusterResponsePrivate::parseCreateDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
