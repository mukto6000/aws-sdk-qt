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

#include "modifyclusterresponse.h"
#include "modifyclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::ModifyClusterResponse
 * \brief The ModifyClusterResponse class provides an interace for CloudHsmV2 ModifyCluster responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::modifyCluster
 */

/*!
 * Constructs a ModifyClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyClusterResponse::ModifyClusterResponse(
        const ModifyClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new ModifyClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyClusterRequest * ModifyClusterResponse::request() const
{
    Q_D(const ModifyClusterResponse);
    return static_cast<const ModifyClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 ModifyCluster \a response.
 */
void ModifyClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::ModifyClusterResponsePrivate
 * \brief The ModifyClusterResponsePrivate class provides private implementation for ModifyClusterResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a ModifyClusterResponsePrivate object with public implementation \a q.
 */
ModifyClusterResponsePrivate::ModifyClusterResponsePrivate(
    ModifyClusterResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 ModifyCluster response element from \a xml.
 */
void ModifyClusterResponsePrivate::parseModifyClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
