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

#include "listresourcesinprotectiongroupresponse.h"
#include "listresourcesinprotectiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ListResourcesInProtectionGroupResponse
 * \brief The ListResourcesInProtectionGroupResponse class provides an interace for Shield ListResourcesInProtectionGroup responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::listResourcesInProtectionGroup
 */

/*!
 * Constructs a ListResourcesInProtectionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourcesInProtectionGroupResponse::ListResourcesInProtectionGroupResponse(
        const ListResourcesInProtectionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new ListResourcesInProtectionGroupResponsePrivate(this), parent)
{
    setRequest(new ListResourcesInProtectionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourcesInProtectionGroupRequest * ListResourcesInProtectionGroupResponse::request() const
{
    Q_D(const ListResourcesInProtectionGroupResponse);
    return static_cast<const ListResourcesInProtectionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield ListResourcesInProtectionGroup \a response.
 */
void ListResourcesInProtectionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourcesInProtectionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::ListResourcesInProtectionGroupResponsePrivate
 * \brief The ListResourcesInProtectionGroupResponsePrivate class provides private implementation for ListResourcesInProtectionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ListResourcesInProtectionGroupResponsePrivate object with public implementation \a q.
 */
ListResourcesInProtectionGroupResponsePrivate::ListResourcesInProtectionGroupResponsePrivate(
    ListResourcesInProtectionGroupResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield ListResourcesInProtectionGroup response element from \a xml.
 */
void ListResourcesInProtectionGroupResponsePrivate::parseListResourcesInProtectionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesInProtectionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
