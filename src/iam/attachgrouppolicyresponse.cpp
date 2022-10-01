// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachgrouppolicyresponse.h"
#include "attachgrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AttachGroupPolicyResponse
 * \brief The AttachGroupPolicyResponse class provides an interace for Iam AttachGroupPolicy responses.
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
 * \sa IamClient::attachGroupPolicy
 */

/*!
 * Constructs a AttachGroupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
AttachGroupPolicyResponse::AttachGroupPolicyResponse(
        const AttachGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new AttachGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new AttachGroupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachGroupPolicyRequest * AttachGroupPolicyResponse::request() const
{
    Q_D(const AttachGroupPolicyResponse);
    return static_cast<const AttachGroupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam AttachGroupPolicy \a response.
 */
void AttachGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachGroupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::AttachGroupPolicyResponsePrivate
 * \brief The AttachGroupPolicyResponsePrivate class provides private implementation for AttachGroupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AttachGroupPolicyResponsePrivate object with public implementation \a q.
 */
AttachGroupPolicyResponsePrivate::AttachGroupPolicyResponsePrivate(
    AttachGroupPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam AttachGroupPolicy response element from \a xml.
 */
void AttachGroupPolicyResponsePrivate::parseAttachGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachGroupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
