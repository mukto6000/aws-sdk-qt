// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateservicespecificcredentialresponse.h"
#include "updateservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateServiceSpecificCredentialResponse
 * \brief The UpdateServiceSpecificCredentialResponse class provides an interace for Iam UpdateServiceSpecificCredential responses.
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
 * \sa IamClient::updateServiceSpecificCredential
 */

/*!
 * Constructs a UpdateServiceSpecificCredentialResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceSpecificCredentialResponse::UpdateServiceSpecificCredentialResponse(
        const UpdateServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceSpecificCredentialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceSpecificCredentialRequest * UpdateServiceSpecificCredentialResponse::request() const
{
    Q_D(const UpdateServiceSpecificCredentialResponse);
    return static_cast<const UpdateServiceSpecificCredentialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateServiceSpecificCredential \a response.
 */
void UpdateServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateServiceSpecificCredentialResponsePrivate
 * \brief The UpdateServiceSpecificCredentialResponsePrivate class provides private implementation for UpdateServiceSpecificCredentialResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateServiceSpecificCredentialResponsePrivate object with public implementation \a q.
 */
UpdateServiceSpecificCredentialResponsePrivate::UpdateServiceSpecificCredentialResponsePrivate(
    UpdateServiceSpecificCredentialResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateServiceSpecificCredential response element from \a xml.
 */
void UpdateServiceSpecificCredentialResponsePrivate::parseUpdateServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceSpecificCredentialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
