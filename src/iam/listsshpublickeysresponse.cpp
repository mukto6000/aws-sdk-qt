// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsshpublickeysresponse.h"
#include "listsshpublickeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListSSHPublicKeysResponse
 * \brief The ListSSHPublicKeysResponse class provides an interace for Iam ListSSHPublicKeys responses.
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
 * \sa IamClient::listSSHPublicKeys
 */

/*!
 * Constructs a ListSSHPublicKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListSSHPublicKeysResponse::ListSSHPublicKeysResponse(
        const ListSSHPublicKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListSSHPublicKeysResponsePrivate(this), parent)
{
    setRequest(new ListSSHPublicKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSSHPublicKeysRequest * ListSSHPublicKeysResponse::request() const
{
    Q_D(const ListSSHPublicKeysResponse);
    return static_cast<const ListSSHPublicKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListSSHPublicKeys \a response.
 */
void ListSSHPublicKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSSHPublicKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListSSHPublicKeysResponsePrivate
 * \brief The ListSSHPublicKeysResponsePrivate class provides private implementation for ListSSHPublicKeysResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListSSHPublicKeysResponsePrivate object with public implementation \a q.
 */
ListSSHPublicKeysResponsePrivate::ListSSHPublicKeysResponsePrivate(
    ListSSHPublicKeysResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListSSHPublicKeys response element from \a xml.
 */
void ListSSHPublicKeysResponsePrivate::parseListSSHPublicKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSSHPublicKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
