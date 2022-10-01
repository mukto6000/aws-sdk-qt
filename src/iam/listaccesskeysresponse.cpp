// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesskeysresponse.h"
#include "listaccesskeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAccessKeysResponse
 * \brief The ListAccessKeysResponse class provides an interace for Iam ListAccessKeys responses.
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
 * \sa IamClient::listAccessKeys
 */

/*!
 * Constructs a ListAccessKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessKeysResponse::ListAccessKeysResponse(
        const ListAccessKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListAccessKeysResponsePrivate(this), parent)
{
    setRequest(new ListAccessKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessKeysRequest * ListAccessKeysResponse::request() const
{
    Q_D(const ListAccessKeysResponse);
    return static_cast<const ListAccessKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListAccessKeys \a response.
 */
void ListAccessKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListAccessKeysResponsePrivate
 * \brief The ListAccessKeysResponsePrivate class provides private implementation for ListAccessKeysResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAccessKeysResponsePrivate object with public implementation \a q.
 */
ListAccessKeysResponsePrivate::ListAccessKeysResponsePrivate(
    ListAccessKeysResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListAccessKeys response element from \a xml.
 */
void ListAccessKeysResponsePrivate::parseListAccessKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
