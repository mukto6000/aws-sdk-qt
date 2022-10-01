// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinventoryentriesresponse.h"
#include "listinventoryentriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::ListInventoryEntriesResponse
 * \brief The ListInventoryEntriesResponse class provides an interace for Ssm ListInventoryEntries responses.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::listInventoryEntries
 */

/*!
 * Constructs a ListInventoryEntriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInventoryEntriesResponse::ListInventoryEntriesResponse(
        const ListInventoryEntriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new ListInventoryEntriesResponsePrivate(this), parent)
{
    setRequest(new ListInventoryEntriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInventoryEntriesRequest * ListInventoryEntriesResponse::request() const
{
    Q_D(const ListInventoryEntriesResponse);
    return static_cast<const ListInventoryEntriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm ListInventoryEntries \a response.
 */
void ListInventoryEntriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInventoryEntriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::ListInventoryEntriesResponsePrivate
 * \brief The ListInventoryEntriesResponsePrivate class provides private implementation for ListInventoryEntriesResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a ListInventoryEntriesResponsePrivate object with public implementation \a q.
 */
ListInventoryEntriesResponsePrivate::ListInventoryEntriesResponsePrivate(
    ListInventoryEntriesResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm ListInventoryEntries response element from \a xml.
 */
void ListInventoryEntriesResponsePrivate::parseListInventoryEntriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInventoryEntriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
