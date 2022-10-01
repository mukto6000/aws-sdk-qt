// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetrequest.h"
#include "deletedatasetrequest_p.h"
#include "deletedatasetresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteDatasetRequest
 * \brief The DeleteDatasetRequest class provides an interface for Personalize DeleteDataset requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetRequest::DeleteDatasetRequest(const DeleteDatasetRequest &other)
    : PersonalizeRequest(new DeleteDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetRequest object.
 */
DeleteDatasetRequest::DeleteDatasetRequest()
    : PersonalizeRequest(new DeleteDatasetRequestPrivate(PersonalizeRequest::DeleteDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteDatasetRequestPrivate
 * \brief The DeleteDatasetRequestPrivate class provides private implementation for DeleteDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteDatasetRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const PersonalizeRequest::Action action, DeleteDatasetRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetRequest
 * class' copy constructor.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const DeleteDatasetRequestPrivate &other, DeleteDatasetRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
