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

#include "associatedrtroleresponse.h"
#include "associatedrtroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateDRTRoleResponse
 * \brief The AssociateDRTRoleResponse class provides an interace for Shield AssociateDRTRole responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::associateDRTRole
 */

/*!
 * Constructs a AssociateDRTRoleResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDRTRoleResponse::AssociateDRTRoleResponse(
        const AssociateDRTRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new AssociateDRTRoleResponsePrivate(this), parent)
{
    setRequest(new AssociateDRTRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDRTRoleRequest * AssociateDRTRoleResponse::request() const
{
    return static_cast<const AssociateDRTRoleRequest *>(ShieldResponse::request());
}

/*!
 * \reimp
 * Parses a successful Shield AssociateDRTRole \a response.
 */
void AssociateDRTRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDRTRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::AssociateDRTRoleResponsePrivate
 * \brief The AssociateDRTRoleResponsePrivate class provides private implementation for AssociateDRTRoleResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateDRTRoleResponsePrivate object with public implementation \a q.
 */
AssociateDRTRoleResponsePrivate::AssociateDRTRoleResponsePrivate(
    AssociateDRTRoleResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield AssociateDRTRole response element from \a xml.
 */
void AssociateDRTRoleResponsePrivate::parseAssociateDRTRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDRTRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
