// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccountaliasesrequest.h"
#include "listaccountaliasesrequest_p.h"
#include "listaccountaliasesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAccountAliasesRequest
 * \brief The ListAccountAliasesRequest class provides an interface for Iam ListAccountAliases requests.
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
 * \sa IamClient::listAccountAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountAliasesRequest::ListAccountAliasesRequest(const ListAccountAliasesRequest &other)
    : IamRequest(new ListAccountAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountAliasesRequest object.
 */
ListAccountAliasesRequest::ListAccountAliasesRequest()
    : IamRequest(new ListAccountAliasesRequestPrivate(IamRequest::ListAccountAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListAccountAliasesRequestPrivate
 * \brief The ListAccountAliasesRequestPrivate class provides private implementation for ListAccountAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAccountAliasesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListAccountAliasesRequestPrivate::ListAccountAliasesRequestPrivate(
    const IamRequest::Action action, ListAccountAliasesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountAliasesRequest
 * class' copy constructor.
 */
ListAccountAliasesRequestPrivate::ListAccountAliasesRequestPrivate(
    const ListAccountAliasesRequestPrivate &other, ListAccountAliasesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
