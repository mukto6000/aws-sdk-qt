// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappsrequest.h"
#include "listappsrequest_p.h"
#include "listappsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAppsRequest
 * \brief The ListAppsRequest class provides an interface for SageMaker ListApps requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listApps
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppsRequest::ListAppsRequest(const ListAppsRequest &other)
    : SageMakerRequest(new ListAppsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppsRequest object.
 */
ListAppsRequest::ListAppsRequest()
    : SageMakerRequest(new ListAppsRequestPrivate(SageMakerRequest::ListAppsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAppsRequestPrivate
 * \brief The ListAppsRequestPrivate class provides private implementation for ListAppsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAppsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const SageMakerRequest::Action action, ListAppsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppsRequest
 * class' copy constructor.
 */
ListAppsRequestPrivate::ListAppsRequestPrivate(
    const ListAppsRequestPrivate &other, ListAppsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
