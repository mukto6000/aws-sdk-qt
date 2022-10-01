// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetimporthistoryrequest.h"
#include "listdatasetimporthistoryrequest_p.h"
#include "listdatasetimporthistoryresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListDataSetImportHistoryRequest
 * \brief The ListDataSetImportHistoryRequest class provides an interface for M2 ListDataSetImportHistory requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listDataSetImportHistory
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSetImportHistoryRequest::ListDataSetImportHistoryRequest(const ListDataSetImportHistoryRequest &other)
    : M2Request(new ListDataSetImportHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSetImportHistoryRequest object.
 */
ListDataSetImportHistoryRequest::ListDataSetImportHistoryRequest()
    : M2Request(new ListDataSetImportHistoryRequestPrivate(M2Request::ListDataSetImportHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSetImportHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSetImportHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSetImportHistoryRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSetImportHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListDataSetImportHistoryRequestPrivate
 * \brief The ListDataSetImportHistoryRequestPrivate class provides private implementation for ListDataSetImportHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListDataSetImportHistoryRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListDataSetImportHistoryRequestPrivate::ListDataSetImportHistoryRequestPrivate(
    const M2Request::Action action, ListDataSetImportHistoryRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSetImportHistoryRequest
 * class' copy constructor.
 */
ListDataSetImportHistoryRequestPrivate::ListDataSetImportHistoryRequestPrivate(
    const ListDataSetImportHistoryRequestPrivate &other, ListDataSetImportHistoryRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
