// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putfindingspublicationconfigurationrequest.h"
#include "putfindingspublicationconfigurationrequest_p.h"
#include "putfindingspublicationconfigurationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::PutFindingsPublicationConfigurationRequest
 * \brief The PutFindingsPublicationConfigurationRequest class provides an interface for Macie2 PutFindingsPublicationConfiguration requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::putFindingsPublicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutFindingsPublicationConfigurationRequest::PutFindingsPublicationConfigurationRequest(const PutFindingsPublicationConfigurationRequest &other)
    : Macie2Request(new PutFindingsPublicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutFindingsPublicationConfigurationRequest object.
 */
PutFindingsPublicationConfigurationRequest::PutFindingsPublicationConfigurationRequest()
    : Macie2Request(new PutFindingsPublicationConfigurationRequestPrivate(Macie2Request::PutFindingsPublicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutFindingsPublicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutFindingsPublicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutFindingsPublicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutFindingsPublicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::PutFindingsPublicationConfigurationRequestPrivate
 * \brief The PutFindingsPublicationConfigurationRequestPrivate class provides private implementation for PutFindingsPublicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a PutFindingsPublicationConfigurationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
PutFindingsPublicationConfigurationRequestPrivate::PutFindingsPublicationConfigurationRequestPrivate(
    const Macie2Request::Action action, PutFindingsPublicationConfigurationRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutFindingsPublicationConfigurationRequest
 * class' copy constructor.
 */
PutFindingsPublicationConfigurationRequestPrivate::PutFindingsPublicationConfigurationRequestPrivate(
    const PutFindingsPublicationConfigurationRequestPrivate &other, PutFindingsPublicationConfigurationRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
