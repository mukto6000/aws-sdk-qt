// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createproposalresponse.h"
#include "createproposalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateProposalResponse
 * \brief The CreateProposalResponse class provides an interace for ManagedBlockchain CreateProposal responses.
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
 * \sa ManagedBlockchainClient::createProposal
 */

/*!
 * Constructs a CreateProposalResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProposalResponse::CreateProposalResponse(
        const CreateProposalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new CreateProposalResponsePrivate(this), parent)
{
    setRequest(new CreateProposalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProposalRequest * CreateProposalResponse::request() const
{
    Q_D(const CreateProposalResponse);
    return static_cast<const CreateProposalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain CreateProposal \a response.
 */
void CreateProposalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProposalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::CreateProposalResponsePrivate
 * \brief The CreateProposalResponsePrivate class provides private implementation for CreateProposalResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateProposalResponsePrivate object with public implementation \a q.
 */
CreateProposalResponsePrivate::CreateProposalResponsePrivate(
    CreateProposalResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain CreateProposal response element from \a xml.
 */
void CreateProposalResponsePrivate::parseCreateProposalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProposalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
