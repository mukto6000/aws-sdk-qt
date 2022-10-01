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

#include "addclientidtoopenidconnectproviderresponse.h"
#include "addclientidtoopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AddClientIDToOpenIDConnectProviderResponse
 * \brief The AddClientIDToOpenIDConnectProviderResponse class provides an interace for Iam AddClientIDToOpenIDConnectProvider responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::addClientIDToOpenIDConnectProvider
 */

/*!
 * Constructs a AddClientIDToOpenIDConnectProviderResponse object for \a reply to \a request, with parent \a parent.
 */
AddClientIDToOpenIDConnectProviderResponse::AddClientIDToOpenIDConnectProviderResponse(
        const AddClientIDToOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new AddClientIDToOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new AddClientIDToOpenIDConnectProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddClientIDToOpenIDConnectProviderRequest * AddClientIDToOpenIDConnectProviderResponse::request() const
{
    Q_D(const AddClientIDToOpenIDConnectProviderResponse);
    return static_cast<const AddClientIDToOpenIDConnectProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam AddClientIDToOpenIDConnectProvider \a response.
 */
void AddClientIDToOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddClientIDToOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::AddClientIDToOpenIDConnectProviderResponsePrivate
 * \brief The AddClientIDToOpenIDConnectProviderResponsePrivate class provides private implementation for AddClientIDToOpenIDConnectProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AddClientIDToOpenIDConnectProviderResponsePrivate object with public implementation \a q.
 */
AddClientIDToOpenIDConnectProviderResponsePrivate::AddClientIDToOpenIDConnectProviderResponsePrivate(
    AddClientIDToOpenIDConnectProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam AddClientIDToOpenIDConnectProvider response element from \a xml.
 */
void AddClientIDToOpenIDConnectProviderResponsePrivate::parseAddClientIDToOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddClientIDToOpenIDConnectProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
