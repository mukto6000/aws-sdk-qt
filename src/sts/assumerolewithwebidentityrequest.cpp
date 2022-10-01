// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "assumerolewithwebidentityrequest.h"
#include "assumerolewithwebidentityrequest_p.h"
#include "assumerolewithwebidentityresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::AssumeRoleWithWebIdentityRequest
 * \brief The AssumeRoleWithWebIdentityRequest class provides an interface for Sts AssumeRoleWithWebIdentity requests.
 *
 * \inmodule QtAwsSts
 *
 *  <fullname>Security Token Service</fullname>
 * 
 *  Security Token Service (STS) enables you to request temporary, limited-privilege credentials for Identity and Access
 *  Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of the STS
 *  API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::assumeRoleWithWebIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest(const AssumeRoleWithWebIdentityRequest &other)
    : StsRequest(new AssumeRoleWithWebIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssumeRoleWithWebIdentityRequest object.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest()
    : StsRequest(new AssumeRoleWithWebIdentityRequestPrivate(StsRequest::AssumeRoleWithWebIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool AssumeRoleWithWebIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssumeRoleWithWebIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeRoleWithWebIdentityRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleWithWebIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::AssumeRoleWithWebIdentityRequestPrivate
 * \brief The AssumeRoleWithWebIdentityRequestPrivate class provides private implementation for AssumeRoleWithWebIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a AssumeRoleWithWebIdentityRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const StsRequest::Action action, AssumeRoleWithWebIdentityRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleWithWebIdentityRequest
 * class' copy constructor.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const AssumeRoleWithWebIdentityRequestPrivate &other, AssumeRoleWithWebIdentityRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws
