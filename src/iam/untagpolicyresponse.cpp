// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagpolicyresponse.h"
#include "untagpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagPolicyResponse
 * \brief The UntagPolicyResponse class provides an interace for Iam UntagPolicy responses.
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
 * \sa IamClient::untagPolicy
 */

/*!
 * Constructs a UntagPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UntagPolicyResponse::UntagPolicyResponse(
        const UntagPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagPolicyResponsePrivate(this), parent)
{
    setRequest(new UntagPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagPolicyRequest * UntagPolicyResponse::request() const
{
    Q_D(const UntagPolicyResponse);
    return static_cast<const UntagPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UntagPolicy \a response.
 */
void UntagPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UntagPolicyResponsePrivate
 * \brief The UntagPolicyResponsePrivate class provides private implementation for UntagPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagPolicyResponsePrivate object with public implementation \a q.
 */
UntagPolicyResponsePrivate::UntagPolicyResponsePrivate(
    UntagPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UntagPolicy response element from \a xml.
 */
void UntagPolicyResponsePrivate::parseUntagPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
