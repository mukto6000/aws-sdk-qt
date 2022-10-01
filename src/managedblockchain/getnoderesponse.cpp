// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnoderesponse.h"
#include "getnoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetNodeResponse
 * \brief The GetNodeResponse class provides an interace for ManagedBlockchain GetNode responses.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  </p
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open-source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central
 * 
 *  authority>
 * 
 *  Managed Blockchain supports the Hyperledger Fabric and Ethereum open-source frameworks. Because of fundamental
 *  differences between the frameworks, some API actions or data types may only apply in the context of one framework and
 *  not the other. For example, actions related to Hyperledger Fabric network members such as <code>CreateMember</code> and
 *  <code>DeleteMember</code> do not apply to
 * 
 *  Ethereum>
 * 
 *  The description for each action indicates the framework or frameworks to which it applies. Data types and properties
 *  that apply only in the context of a particular framework are similarly
 *
 * \sa ManagedBlockchainClient::getNode
 */

/*!
 * Constructs a GetNodeResponse object for \a reply to \a request, with parent \a parent.
 */
GetNodeResponse::GetNodeResponse(
        const GetNodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new GetNodeResponsePrivate(this), parent)
{
    setRequest(new GetNodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNodeRequest * GetNodeResponse::request() const
{
    Q_D(const GetNodeResponse);
    return static_cast<const GetNodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain GetNode \a response.
 */
void GetNodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::GetNodeResponsePrivate
 * \brief The GetNodeResponsePrivate class provides private implementation for GetNodeResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetNodeResponsePrivate object with public implementation \a q.
 */
GetNodeResponsePrivate::GetNodeResponsePrivate(
    GetNodeResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain GetNode response element from \a xml.
 */
void GetNodeResponsePrivate::parseGetNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
