// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpolicyresponse.h"
#include "createpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreatePolicyResponse
 * \brief The CreatePolicyResponse class provides an interace for Iam CreatePolicy responses.
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
 * \sa IamClient::createPolicy
 */

/*!
 * Constructs a CreatePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePolicyResponse::CreatePolicyResponse(
        const CreatePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreatePolicyResponsePrivate(this), parent)
{
    setRequest(new CreatePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePolicyRequest * CreatePolicyResponse::request() const
{
    Q_D(const CreatePolicyResponse);
    return static_cast<const CreatePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreatePolicy \a response.
 */
void CreatePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreatePolicyResponsePrivate
 * \brief The CreatePolicyResponsePrivate class provides private implementation for CreatePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreatePolicyResponsePrivate object with public implementation \a q.
 */
CreatePolicyResponsePrivate::CreatePolicyResponsePrivate(
    CreatePolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreatePolicy response element from \a xml.
 */
void CreatePolicyResponsePrivate::parseCreatePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
