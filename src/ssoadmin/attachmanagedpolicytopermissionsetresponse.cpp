// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachmanagedpolicytopermissionsetresponse.h"
#include "attachmanagedpolicytopermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::AttachManagedPolicyToPermissionSetResponse
 * \brief The AttachManagedPolicyToPermissionSetResponse class provides an interace for SsoAdmin AttachManagedPolicyToPermissionSet responses.
 *
 * \inmodule QtAwsSsoAdmin
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) helps you securely create, or connect, your workforce
 *  identities and manage their access centrally across AWS accounts and applications. IAM Identity Center is the
 *  recommended approach for workforce authentication and authorization in AWS, for organizations of any size and
 * 
 *  type> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide provides information on single sign-on operations which could be used for access management of AWS
 *  accounts. For information about IAM Identity Center features, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>>
 * 
 *  Many operations in the IAM Identity Center APIs rely on identifiers for users and groups, known as principals. For more
 *  information about how to work with principals and principal IDs in IAM Identity Center, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">Identity Store API
 * 
 *  Reference</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, and more). The SDKs provide a convenient way to create programmatic access to IAM Identity Center
 *  and other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoAdminClient::attachManagedPolicyToPermissionSet
 */

/*!
 * Constructs a AttachManagedPolicyToPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
AttachManagedPolicyToPermissionSetResponse::AttachManagedPolicyToPermissionSetResponse(
        const AttachManagedPolicyToPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoAdminResponse(new AttachManagedPolicyToPermissionSetResponsePrivate(this), parent)
{
    setRequest(new AttachManagedPolicyToPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachManagedPolicyToPermissionSetRequest * AttachManagedPolicyToPermissionSetResponse::request() const
{
    Q_D(const AttachManagedPolicyToPermissionSetResponse);
    return static_cast<const AttachManagedPolicyToPermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsoAdmin AttachManagedPolicyToPermissionSet \a response.
 */
void AttachManagedPolicyToPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachManagedPolicyToPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsoAdmin::AttachManagedPolicyToPermissionSetResponsePrivate
 * \brief The AttachManagedPolicyToPermissionSetResponsePrivate class provides private implementation for AttachManagedPolicyToPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a AttachManagedPolicyToPermissionSetResponsePrivate object with public implementation \a q.
 */
AttachManagedPolicyToPermissionSetResponsePrivate::AttachManagedPolicyToPermissionSetResponsePrivate(
    AttachManagedPolicyToPermissionSetResponse * const q) : SsoAdminResponsePrivate(q)
{

}

/*!
 * Parses a SsoAdmin AttachManagedPolicyToPermissionSet response element from \a xml.
 */
void AttachManagedPolicyToPermissionSetResponsePrivate::parseAttachManagedPolicyToPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachManagedPolicyToPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsoAdmin
} // namespace QtAws
