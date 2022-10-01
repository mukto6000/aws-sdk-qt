// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateopenidconnectproviderthumbprintrequest.h"
#include "updateopenidconnectproviderthumbprintrequest_p.h"
#include "updateopenidconnectproviderthumbprintresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateOpenIDConnectProviderThumbprintRequest
 * \brief The UpdateOpenIDConnectProviderThumbprintRequest class provides an interface for Iam UpdateOpenIDConnectProviderThumbprint requests.
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
 * \sa IamClient::updateOpenIDConnectProviderThumbprint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOpenIDConnectProviderThumbprintRequest::UpdateOpenIDConnectProviderThumbprintRequest(const UpdateOpenIDConnectProviderThumbprintRequest &other)
    : IamRequest(new UpdateOpenIDConnectProviderThumbprintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOpenIDConnectProviderThumbprintRequest object.
 */
UpdateOpenIDConnectProviderThumbprintRequest::UpdateOpenIDConnectProviderThumbprintRequest()
    : IamRequest(new UpdateOpenIDConnectProviderThumbprintRequestPrivate(IamRequest::UpdateOpenIDConnectProviderThumbprintAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateOpenIDConnectProviderThumbprintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateOpenIDConnectProviderThumbprintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOpenIDConnectProviderThumbprintRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOpenIDConnectProviderThumbprintResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateOpenIDConnectProviderThumbprintRequestPrivate
 * \brief The UpdateOpenIDConnectProviderThumbprintRequestPrivate class provides private implementation for UpdateOpenIDConnectProviderThumbprintRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateOpenIDConnectProviderThumbprintRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateOpenIDConnectProviderThumbprintRequestPrivate::UpdateOpenIDConnectProviderThumbprintRequestPrivate(
    const IamRequest::Action action, UpdateOpenIDConnectProviderThumbprintRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateOpenIDConnectProviderThumbprintRequest
 * class' copy constructor.
 */
UpdateOpenIDConnectProviderThumbprintRequestPrivate::UpdateOpenIDConnectProviderThumbprintRequestPrivate(
    const UpdateOpenIDConnectProviderThumbprintRequestPrivate &other, UpdateOpenIDConnectProviderThumbprintRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
