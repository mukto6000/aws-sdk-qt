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

#include "listidentitiesresponse.h"
#include "listidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListIdentitiesResponse
 * \brief The ListIdentitiesResponse class provides an interace for Ses ListIdentities responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::listIdentities
 */

/*!
 * Constructs a ListIdentitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListIdentitiesResponse::ListIdentitiesResponse(
        const ListIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ListIdentitiesResponsePrivate(this), parent)
{
    setRequest(new ListIdentitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIdentitiesRequest * ListIdentitiesResponse::request() const
{
    Q_D(const ListIdentitiesResponse);
    return static_cast<const ListIdentitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses ListIdentities \a response.
 */
void ListIdentitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIdentitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ListIdentitiesResponsePrivate
 * \brief The ListIdentitiesResponsePrivate class provides private implementation for ListIdentitiesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListIdentitiesResponsePrivate object with public implementation \a q.
 */
ListIdentitiesResponsePrivate::ListIdentitiesResponsePrivate(
    ListIdentitiesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ListIdentities response element from \a xml.
 */
void ListIdentitiesResponsePrivate::parseListIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
