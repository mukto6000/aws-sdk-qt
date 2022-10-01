// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listopenidconnectprovidersresponse.h"
#include "listopenidconnectprovidersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListOpenIDConnectProvidersResponse
 * \brief The ListOpenIDConnectProvidersResponse class provides an interace for Iam ListOpenIDConnectProviders responses.
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
 * \sa IamClient::listOpenIDConnectProviders
 */

/*!
 * Constructs a ListOpenIDConnectProvidersResponse object for \a reply to \a request, with parent \a parent.
 */
ListOpenIDConnectProvidersResponse::ListOpenIDConnectProvidersResponse(
        const ListOpenIDConnectProvidersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListOpenIDConnectProvidersResponsePrivate(this), parent)
{
    setRequest(new ListOpenIDConnectProvidersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOpenIDConnectProvidersRequest * ListOpenIDConnectProvidersResponse::request() const
{
    Q_D(const ListOpenIDConnectProvidersResponse);
    return static_cast<const ListOpenIDConnectProvidersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListOpenIDConnectProviders \a response.
 */
void ListOpenIDConnectProvidersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOpenIDConnectProvidersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListOpenIDConnectProvidersResponsePrivate
 * \brief The ListOpenIDConnectProvidersResponsePrivate class provides private implementation for ListOpenIDConnectProvidersResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListOpenIDConnectProvidersResponsePrivate object with public implementation \a q.
 */
ListOpenIDConnectProvidersResponsePrivate::ListOpenIDConnectProvidersResponsePrivate(
    ListOpenIDConnectProvidersResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListOpenIDConnectProviders response element from \a xml.
 */
void ListOpenIDConnectProvidersResponsePrivate::parseListOpenIDConnectProvidersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOpenIDConnectProvidersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
