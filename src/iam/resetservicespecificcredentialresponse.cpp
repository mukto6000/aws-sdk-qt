// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetservicespecificcredentialresponse.h"
#include "resetservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ResetServiceSpecificCredentialResponse
 * \brief The ResetServiceSpecificCredentialResponse class provides an interace for Iam ResetServiceSpecificCredential responses.
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
 * \sa IamClient::resetServiceSpecificCredential
 */

/*!
 * Constructs a ResetServiceSpecificCredentialResponse object for \a reply to \a request, with parent \a parent.
 */
ResetServiceSpecificCredentialResponse::ResetServiceSpecificCredentialResponse(
        const ResetServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ResetServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new ResetServiceSpecificCredentialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetServiceSpecificCredentialRequest * ResetServiceSpecificCredentialResponse::request() const
{
    Q_D(const ResetServiceSpecificCredentialResponse);
    return static_cast<const ResetServiceSpecificCredentialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ResetServiceSpecificCredential \a response.
 */
void ResetServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ResetServiceSpecificCredentialResponsePrivate
 * \brief The ResetServiceSpecificCredentialResponsePrivate class provides private implementation for ResetServiceSpecificCredentialResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ResetServiceSpecificCredentialResponsePrivate object with public implementation \a q.
 */
ResetServiceSpecificCredentialResponsePrivate::ResetServiceSpecificCredentialResponsePrivate(
    ResetServiceSpecificCredentialResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ResetServiceSpecificCredential response element from \a xml.
 */
void ResetServiceSpecificCredentialResponsePrivate::parseResetServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetServiceSpecificCredentialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
