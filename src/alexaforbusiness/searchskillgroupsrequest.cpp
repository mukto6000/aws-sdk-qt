// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchskillgroupsrequest.h"
#include "searchskillgroupsrequest_p.h"
#include "searchskillgroupsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchSkillGroupsRequest
 * \brief The SearchSkillGroupsRequest class provides an interface for AlexaForBusiness SearchSkillGroups requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::searchSkillGroups
 */

/*!
 * Constructs a copy of \a other.
 */
SearchSkillGroupsRequest::SearchSkillGroupsRequest(const SearchSkillGroupsRequest &other)
    : AlexaForBusinessRequest(new SearchSkillGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchSkillGroupsRequest object.
 */
SearchSkillGroupsRequest::SearchSkillGroupsRequest()
    : AlexaForBusinessRequest(new SearchSkillGroupsRequestPrivate(AlexaForBusinessRequest::SearchSkillGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchSkillGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchSkillGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchSkillGroupsRequest::response(QNetworkReply * const reply) const
{
    return new SearchSkillGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::SearchSkillGroupsRequestPrivate
 * \brief The SearchSkillGroupsRequestPrivate class provides private implementation for SearchSkillGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchSkillGroupsRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
SearchSkillGroupsRequestPrivate::SearchSkillGroupsRequestPrivate(
    const AlexaForBusinessRequest::Action action, SearchSkillGroupsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchSkillGroupsRequest
 * class' copy constructor.
 */
SearchSkillGroupsRequestPrivate::SearchSkillGroupsRequestPrivate(
    const SearchSkillGroupsRequestPrivate &other, SearchSkillGroupsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
