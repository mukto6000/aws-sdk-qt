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

#include "listpublickeysresponse.h"
#include "listpublickeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListPublicKeysResponse
 * \brief The ListPublicKeysResponse class provides an interace for CloudFront ListPublicKeys responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listPublicKeys
 */

/*!
 * Constructs a ListPublicKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListPublicKeysResponse::ListPublicKeysResponse(
        const ListPublicKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListPublicKeysResponsePrivate(this), parent)
{
    setRequest(new ListPublicKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPublicKeysRequest * ListPublicKeysResponse::request() const
{
    return static_cast<const ListPublicKeysRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront ListPublicKeys \a response.
 */
void ListPublicKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPublicKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListPublicKeysResponsePrivate
 * \brief The ListPublicKeysResponsePrivate class provides private implementation for ListPublicKeysResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListPublicKeysResponsePrivate object with public implementation \a q.
 */
ListPublicKeysResponsePrivate::ListPublicKeysResponsePrivate(
    ListPublicKeysResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListPublicKeys response element from \a xml.
 */
void ListPublicKeysResponsePrivate::parseListPublicKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublicKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
