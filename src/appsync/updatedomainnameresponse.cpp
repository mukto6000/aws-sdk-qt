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

#include "updatedomainnameresponse.h"
#include "updatedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateDomainNameResponse
 * \brief The UpdateDomainNameResponse class provides an interace for AppSync UpdateDomainName responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateDomainName
 */

/*!
 * Constructs a UpdateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainNameResponse::UpdateDomainNameResponse(
        const UpdateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateDomainNameResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainNameRequest * UpdateDomainNameResponse::request() const
{
    Q_D(const UpdateDomainNameResponse);
    return static_cast<const UpdateDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateDomainName \a response.
 */
void UpdateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateDomainNameResponsePrivate
 * \brief The UpdateDomainNameResponsePrivate class provides private implementation for UpdateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateDomainNameResponsePrivate object with public implementation \a q.
 */
UpdateDomainNameResponsePrivate::UpdateDomainNameResponsePrivate(
    UpdateDomainNameResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateDomainName response element from \a xml.
 */
void UpdateDomainNameResponsePrivate::parseUpdateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
