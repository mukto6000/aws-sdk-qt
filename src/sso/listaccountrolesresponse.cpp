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

#include "listaccountrolesresponse.h"
#include "listaccountrolesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSO {

/*!
 * \class QtAws::SSO::ListAccountRolesResponse
 * \brief The ListAccountRolesResponse class provides an interace for SSO ListAccountRoles responses.
 *
 * \inmodule QtAwsSSO
 *
 *  AWS Single Sign-On Portal is a web service that makes it easy for you to assign user access to AWS SSO resources such as
 *  the user portal. Users can get AWS account applications and roles assigned to them and get federated into the
 * 
 *  application>
 * 
 *  For general information about AWS SSO, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What is AWS Single Sign-On?</a> in the
 *  <i>AWS SSO User
 * 
 *  Guide</i>>
 * 
 *  This API reference guide describes the AWS SSO Portal operations that you can call programatically and includes detailed
 *  information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to AWS SSO and other
 *  AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoClient::listAccountRoles
 */

/*!
 * Constructs a ListAccountRolesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountRolesResponse::ListAccountRolesResponse(
        const ListAccountRolesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoResponse(new ListAccountRolesResponsePrivate(this), parent)
{
    setRequest(new ListAccountRolesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountRolesRequest * ListAccountRolesResponse::request() const
{
    Q_D(const ListAccountRolesResponse);
    return static_cast<const ListAccountRolesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSO ListAccountRoles \a response.
 */
void ListAccountRolesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountRolesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSO::ListAccountRolesResponsePrivate
 * \brief The ListAccountRolesResponsePrivate class provides private implementation for ListAccountRolesResponse.
 * \internal
 *
 * \inmodule QtAwsSSO
 */

/*!
 * Constructs a ListAccountRolesResponsePrivate object with public implementation \a q.
 */
ListAccountRolesResponsePrivate::ListAccountRolesResponsePrivate(
    ListAccountRolesResponse * const q) : SsoResponsePrivate(q)
{

}

/*!
 * Parses a SSO ListAccountRoles response element from \a xml.
 */
void ListAccountRolesResponsePrivate::parseListAccountRolesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountRolesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSO
} // namespace QtAws
